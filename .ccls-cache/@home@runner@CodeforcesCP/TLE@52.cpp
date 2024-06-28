#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int findLongestSubstr(const string& a, const string& b) {
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int max_length = 0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                max_length = max(max_length, dp[i][j]);
            }
        }
    }

    return max_length;
}

int minops(const string& a, const string& b) {
    int lcs_length = findLongestSubstr(a, b);
    return a.size() + b.size() - 2 * lcs_length;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << minops(a, b) << endl;
    }
    return 0;
}
