#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int best_x = 2;
        int max_sum = 0;

        for (int x = 2; x <= n; x++) {
            int k = n / x; 
            int current_sum = k * (k + 1) / 2 * x; 

            if (current_sum > max_sum) {
                max_sum = current_sum;
                best_x = x;
            }
        }

        cout << best_x << endl;
    }
    return 0;
}
