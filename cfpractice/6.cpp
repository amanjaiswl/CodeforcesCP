#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];
        }

        int firstCount = -1, secondCount = -1;
        for (int i = 0; i < n; ++i) {
            int count = 0;
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1') {
                    count++;
                }
            }
            if (count > 0) {
                if (firstCount == -1) {
                    firstCount = count;
                } else if (secondCount == -1) {
                    secondCount = count;
                    break;  
                }
            }
        }

        if (secondCount == -1 || firstCount == secondCount) {
            cout << "SQUARE\n";
        } else {
            cout << "TRIANGLE\n";
        }
    }
    return 0;
}
