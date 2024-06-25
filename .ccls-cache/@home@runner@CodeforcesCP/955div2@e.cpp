#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MOD 1000000007
#define MAX_BITS 20

vector<int> bit_count(1 << MAX_BITS, 0);

void precompute() {
    for (int i = 0; i < (1 << MAX_BITS); ++i) {
        bit_count[i] = __builtin_popcount(i);
    }
}

void solve() {
    long long n;
    int k;
    cin >> n >> k;

    long long result = 0;
    long long valid_length = 0;

    for (long long i = 0; i < n;) {
        if (bit_count[i & ((1 << MAX_BITS) - 1)] <= k) {
            // Find the next invalid position
            long long next_invalid = i;
            while (next_invalid < n && bit_count[next_invalid & ((1 << MAX_BITS) - 1)] <= k) {
                ++next_invalid;
            }
            long long valid_range_length = next_invalid - i;
            result = (result + (valid_range_length * (valid_range_length + 1) / 2) % MOD) % MOD;
            i = next_invalid;
        } else {
            ++i;
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
