#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> leftPocket, rightPocket;

        for (int i = 0; i < n; i++) {
            int coin;
            cin >> coin;
            if (coin < k) {
                leftPocket.push_back(coin);
            }
        }

        for (int i = 0; i < m; i++) {
            int coin;
            cin >> coin;
            if (coin < k) {
                rightPocket.push_back(coin);
            }
        }

        int count = 0;
        for (int leftCoin : leftPocket) {
            for (int rightCoin : rightPocket) {
                if (leftCoin + rightCoin <= k) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
