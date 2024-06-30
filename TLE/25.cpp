#include <iostream>
#include <unordered_map>
using namespace std;

bool palindrome(int n, int k, const string& s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int odd_count = 0;
    for (const auto& pair : freq) {
        if (pair.second % 2 != 0) {
            odd_count++;
        }
    }

    return odd_count <= k + 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        if (palindrome(n, k, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
