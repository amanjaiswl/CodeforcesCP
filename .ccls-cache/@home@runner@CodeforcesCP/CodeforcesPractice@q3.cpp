#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == 'B') {
                cnt++;   
                i += k;  
            } else {
                i++;     
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}
