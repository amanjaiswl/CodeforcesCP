#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string s;
        cin >> n >> m;
        cin >> s;

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        int sum = 0;
        for (char c = 'A'; c <= 'G'; ++c) {
            if (freq[c] < m) {
                sum += m - freq[c];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
