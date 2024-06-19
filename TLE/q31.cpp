#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

#define ll long long

void solve() {
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> freqS, freqT;
    for (char c : s) {
        freqS[c]++;
    }
    for (char c : t) {
        freqT[c]++;
    }

    
    for (char c : t) {
        if (freqS[c] < freqT[c]) {
            cout << "NO\n";
            return;
        }
    }

    
    for (auto &[ch, count] : freqT) {
        freqS[ch] -= count;
    }

    for (auto &[ch, count] : freqS) {
        while (count-- > 0) {
            auto pos = s.find(ch);
            if (pos != string::npos) {
                s.erase(pos, 1);
            }
        }
    }

    if (s == t) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
