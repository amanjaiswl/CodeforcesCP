#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_set<char> seen;
    int split_index = n;  

    for (int i = 0; i < n; ++i) {
        if (seen.count(s[i])) {
            split_index = i;
            break;
        }
        seen.insert(s[i]);
    }

    int f_a = seen.size();

    unordered_set<char> unique_b;
    for (int i = split_index; i < n; ++i) {
        unique_b.insert(s[i]);
    }
    int f_b = unique_b.size();

    cout << f_a + f_b << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}