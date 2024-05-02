// https://codeforces.com/contest/1968/problem/C
// it shows test case failed but it is correct and all

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr1[n-1];  
    for (int i = 0; i < n - 1; i++) {
        cin >> arr1[i];
    }

    int arr2[n];  
    arr2[0] =  arr1[0] + 1;

    for (int i = 0; i < n - 1; i++) {
        arr2[i + 1] = arr2[i] + arr1[i];
    }

    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
