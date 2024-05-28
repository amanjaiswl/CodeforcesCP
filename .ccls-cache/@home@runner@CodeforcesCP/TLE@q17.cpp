// https://codeforces.com/problemset/problem/1834/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int pluscount = 0;
        int negcount = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) {
                pluscount++;
            } else {
                negcount++;
            }
        }

        if (negcount % 2 == 0 && (negcount <= pluscount)) {
            cout << 0 << endl;
        } else {
            int minop = 0;
            int sum = pluscount - negcount;
            while (sum < 0) {
                minop++;
                negcount--;
                pluscount++;
                sum = pluscount - negcount;
            }
            if (negcount % 2 != 0) {
                minop++;
            }
            cout << minop << endl;
        }
    }
    return 0;
}
