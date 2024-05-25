//  this is ques 1. did it correctly in the contest. rest couldn't do :(

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        vector<int> x(a.begin(), a.begin() + i + 1); 
        vector<int> y(a.begin() + i + 1, a.end());   

        vector<int> combined1 = x;
        combined1.insert(combined1.end(), y.begin(), y.end());

        vector<int> combined2 = y;
        combined2.insert(combined2.end(), x.begin(), x.end());

        if (is_sorted(combined1.begin(), combined1.end()) || is_sorted(combined2.begin(), combined2.end())) {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
