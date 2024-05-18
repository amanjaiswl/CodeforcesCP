// right answer, time exceeded on test case 7, but used normal search. then used binary search, but got some error on test 20 coz of precision . and then changed to long long and now it is working fine.

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    int arr1[k + 1];
    arr1[0] = 0; 
    for (int i = 1; i <= k; i++) {
        cin >> arr1[i];
    }

    int arr2[k + 1];
    arr2[0] = 0; 
    for (int i = 1; i <= k; i++) {
        cin >> arr2[i];
    }

    int arr3[q];
    for (int i = 0; i < q; i++) {
        cin >> arr3[i];
    }

    for (int i = 0; i < q; i++) {
        int d = arr3[i];
        long long time = 0;

        int left = 0, right = k;
        while (left < right) {
            int mid = (left + right + 1) / 2;
            if (arr1[mid] <= d) {
                left = mid;
            } else {
                right = mid - 1;
            }
        }

        int segment = right;
        if (segment > 0) {
            time = arr2[segment];
        }
        if (segment < k) {
            time += (long long)(d - arr1[segment]) * (arr2[segment + 1] - arr2[segment]) / (arr1[segment + 1] - arr1[segment]);
        }

        cout << time << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

