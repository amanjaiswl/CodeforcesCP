// https://codeforces.com/problemset/problem/1777/A
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int sum = 0, currseq = 1;

        for (int i = 0; i < n - 1; i++) {
            if (v[i] % 2 == v[i + 1] % 2) {
                currseq++;
            } else {
                sum += (currseq - 1); 
                currseq = 1;
            }
        }

      
        sum += (currseq - 1);

        cout << sum << "\n";
    }
    return 0;
}
