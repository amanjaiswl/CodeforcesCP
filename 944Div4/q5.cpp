// right answer. time exceeded on test case 7

#include <iostream>
#include <cmath>

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
        double time = 0;

        for (int j = 1; j <= k; j++) {
            if (d <= arr1[j]) {
                time += (double)(d - arr1[j - 1]) * (arr2[j] - arr2[j - 1]) / (arr1[j] - arr1[j - 1]);
                break;
            } else {
                time += (double)(arr1[j] - arr1[j - 1]) * (arr2[j] - arr2[j - 1]) / (arr1[j] - arr1[j - 1]);
            }
        }
        cout << (int)floor(time) << " ";
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
