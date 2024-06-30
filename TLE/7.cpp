#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        if (x.find(s) != string::npos) {
            cout << 0 << endl;
            continue; 
        }

        string current = x; 
        bool found = false;

        for (int i = 1; i <= 5; ++i) { 
            current = current + current; 
            if (current.find(s) != string::npos) { 
                cout << i << endl;
                found = true;
                break;
            }
        }

        if (!found) { 
            cout << -1 << endl;
        }
    }
    return 0;
}
