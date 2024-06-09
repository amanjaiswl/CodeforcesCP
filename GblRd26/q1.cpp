#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = false;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[i - 1]) {
                possible = true;
                break;
            }
        }

        if (!possible) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
          cout << "R";
          if(a[1]==a[n-1]){
            cout << "R";
            n--;
          }
            for(int i=0;i<n-1;i++){
              cout << "B";

          }
            cout <<"\n";
            
        }
    }
    return 0;
}
