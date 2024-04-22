#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int front = 0, back = n - 1;
        int sunkShips = 0;

        // A single pass to reduce the durability of the ships
        for (int attack = 0; attack < k; attack++) {
            // Attack front ship
            if (front <= back) {
                if (--arr[front] == 0) {
                    sunkShips++;
                    front++;
                }
            }

            // Attack back ship only if it is different from the front ship
            if (back > front && attack < k - 1) {
                if (--arr[back] == 0) {
                    sunkShips++;
                    back--;
                }
                attack++;
            }
        }

        cout << sunkShips << endl;
    }

    return 0;
}
