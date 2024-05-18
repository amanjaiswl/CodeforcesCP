// https://leetcode.com/problems/valid-anagram/description/


#include <bits/stdc++.h>
using namespace std;

bool anagram(string s, string t) {
    unordered_map<char, int> freq_s, freq_t;

    for (char c : s) {
        freq_s[c]++;
    }

    for (char c : t) {
        freq_t[c]++;
        if (freq_t[c] > freq_s[c]) {
            return false;
        }
    }

    return true;
}

int main() {
    string s, t;
    cin >> s >> t;
    cout << (anagram(s, t)? "true" : "false" ) << endl;
    return 0;
}
