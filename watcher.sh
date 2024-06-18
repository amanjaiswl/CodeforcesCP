#!/bin/bash
TEMPLATE_PATH="/home/runner/CodeforcesCP/template.cpp"
ROOT_DIR="/home/runner/CodeforcesCP" # Specify the root directory of your project

# Function to copy template to new .cpp files
copy_template() {
    local original_path="$1"
    local transformed_path="$original_path"

    # Transform and filter paths
    if [[ "$original_path" == *"/.ccls-cache/"@* ]]; then
        # Convert cached paths to actual paths
        local partial_path="${original_path##*@home@runner@CodeforcesCP/}"
        transformed_path="${ROOT_DIR}/$(echo $partial_path | tr '@' '/')"
    fi

    echo "Final path attempt: $transformed_path"

    # Copy the template if it's a direct .cpp file and not a cache or temp file
    if [[ "$transformed_path" == *.cpp && ! "$transformed_path" =~ /\.ccls-cache|~$|\.blob$/ ]]; then
        cp "$TEMPLATE_PATH" "$transformed_path"
        echo "Template successfully copied to $transformed_path"
    else
        echo "Ignored or invalid path: $transformed_path"
    fi
}

# Regular expression to exclude temporary and cache files
regex_exclude='(\.ccls-cache|~$|\.blob$)'

# Watch for creation of .cpp files and copy the template to them
inotifywait -m -r -e create --format '%w%f' "${ROOT_DIR}" | while read NEW_FILE
do
    echo "File detected: $NEW_FILE"
    # Exclude temporary and cache files explicitly
    if [[ "$NEW_FILE" =~ \.cpp$ && ! "$NEW_FILE" =~ $regex_exclude ]]; then
        sleep 1  # Delay to ensure file readiness
        copy_template "$NEW_FILE"
    else
        echo "Ignored: $NEW_FILE"
    fi
done
