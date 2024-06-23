#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <cmath>

using namespace std;

#define ll long long

ll calc(vector<ll>& nums, vector<ll>& ops) {
    vector<ll> newNums;
    vector<ll> newOps;
    ll n = nums.size();
    for (ll i = 0; i < n; i++) {
        if (i > 0 && ops[i - 1] == 1) {
            newNums.back() *= nums[i];
        } else {
            newNums.push_back(nums[i]);
            if (i > 0) newOps.push_back(ops[i - 1]);
        }
    }
    ll res = newNums[0];
    for (ll i = 0; i < newOps.size(); i++) {
        if (newOps[i] == 0) res += newNums[i + 1];
    }
    return res;
}

void solve() {
    ll n;
    string s;
    cin >> n >> s;
    vector<ll> nums;
    for (char c : s) nums.push_back(c - '0');
    ll m = n - 1;
    ll minRes = LLONG_MAX;
    for (ll mask = 0; mask < (1 << m); mask++) {
        vector<ll> ops;
        for (ll i = 0; i < m; i++) {
            if (mask & (1 << i)) ops.push_back(1);
            else ops.push_back(0);
        }
        minRes = min(minRes, calc(nums, ops));
    }
    cout << minRes << endl;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
