// https://codeforces.com/contest/1873/problem/B
// accepted


#include <iostream>
#include <vector>
#include <climits>

#define ll long long

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int minValue = INT_MAX;
        int minIndex = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < minValue) {
                minValue = v[i];
                minIndex = i;
            }
        }
        v[minIndex] = v[minIndex] + 1;

        ll product = 1; 
        for (int i = 0; i < n; i++) {
            product *= v[i];
           
        }
        cout << product << "\n";
    }
    return 0;
}

