// ques 4, it's right but time esceeded on test 4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool isNonDecreasing(const vector<int>& b) {
    for (size_t i = 1; i < b.size(); ++i) {
        if (b[i] < b[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (n == 2) {
            cout << "YES\n";
            continue;
        }

        vector<int> gcdSeq(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            gcdSeq[i] = gcd(a[i], a[i + 1]);
        }

        if (isNonDecreasing(gcdSeq)) {
            cout << "YES\n";
            continue;
        }

        bool possible = false;
        for (int i = 0; i < n; ++i) {
            vector<int> newA;
            for (int j = 0; j < n; ++j) {
                if (j != i) {
                    newA.push_back(a[j]);
                }
            }

            vector<int> newGcdSeq(newA.size() - 1);
            for (int k = 0; k < newA.size() - 1; ++k) {
                newGcdSeq[k] = gcd(newA[k], newA[k + 1]);
            }

            if (isNonDecreasing(newGcdSeq)) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
