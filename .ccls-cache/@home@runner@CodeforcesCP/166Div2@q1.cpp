#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string pass;
        cin >> pass;
        vector<char> digits;
        vector<char> letters;
        bool invalid = false;

        for (int i = 0; i < n; i++) {
            if (isdigit(pass[i])) {
                digits.push_back(pass[i]);
            } else if (islower(pass[i])) {
                letters.push_back(pass[i]);
            } else {
                cout << "NO" << endl;
                invalid = true;
                break;
            }
        }

        if (invalid) continue;

        if (!letters.empty() && !digits.empty()) {
            int firstLetterIndex = pass.find_first_of(letters[0]);
            int lastDigitIndex = pass.find_last_of(digits.back());
            if (firstLetterIndex < lastDigitIndex) {
                cout << "NO" << endl;
                continue;
            }
        }

        if (!is_sorted(digits.begin(), digits.end()) || !is_sorted(letters.begin(), letters.end())) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }
}
