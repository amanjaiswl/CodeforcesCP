#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int max_k = 1; 
        for (int k = 1; k <= n; ++k) {
            vector<int> invert_count(n, 0);
            int count = 0, max_inversions = 0;

            for (int i = 0; i < n; ++i) {
                // We subtract from count when the end of the previous segment is reached
                if (i >= k) {
                    count -= invert_count[i - k];
                }

                // We invert the character if the count is odd
                if ((s[i] == '0') == (count % 2 == 0)) {
                    // If we're at the last possible start position for a segment and it's a '0',
                    // we can't make all 1s with this k, so break early.
                    if (i > n - k) {
                        max_inversions = -1;
                        break;
                    }

                    // Otherwise, invert the current character and increment the counter
                    ++count;
                    max_inversions = max(max_inversions, count);
                    invert_count[i] = 1; // Mark this position as the start of a segment
                }
            }

            // If we found a k that can invert all '0's to '1's, update max_k
            if (max_inversions != -1) {
                max_k = k;
            }
        }
        cout << max_k << endl;
    }

    return 0;
}
