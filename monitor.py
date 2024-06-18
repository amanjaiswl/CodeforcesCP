import os
import shutil
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler

TEMPLATE = 'template.cpp'

class FileCreationHandler(FileSystemEventHandler):
    def on_created(self, event):
        if event.is_directory:
            return
        if event.src_path.endswith('.cpp'):
            original_path = event.src_path

            # Normalize path
            if '.ccls-cache' in original_path:
                normalized_path = original_path.replace('.ccls-cache/@', '').replace('@', '/')
                normalized_path = '/' + normalized_path  # Add leading slash to make it absolute
                shutil.copyfile(TEMPLATE, normalized_path)
                print(f'Created file: {original_path}')
                print(f'Populated {normalized_path} with template content.')
            else:
                shutil.copyfile(TEMPLATE, original_path)
                print(f'Created file: {original_path}')
                print(f'Populated {original_path} with template content.')

def start_monitoring(path='.'):
    event_handler = FileCreationHandler()
    observer = Observer()
    observer.schedule(event_handler, path, recursive=True)
    observer.start()
    print('Monitoring started. Press Ctrl+C to stop.')
    try:
        while True:
            pass
    except KeyboardInterrupt:
        observer.stop()
    observer.join()

if __name__ == "__main__":
    if not os.path.exists(TEMPLATE):
        print(f'Template file {TEMPLATE} not found.')
        exit(1)
    start_monitoring()
