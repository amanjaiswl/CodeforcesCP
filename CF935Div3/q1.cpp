#include <iostream>
#include <cmath>
using namespace std;

int solve(int i, int e, int u) {
    int tent = 0;
    tent += i; 
    tent += e / 3; 

    int x = e % 3;
    if (x == 1) {
        if (u >= 2) {
            u -= 2;
            tent++;
        } else {
            return -1;
        }
    } else if (x == 2) {
        if (u >= 1) {
            u -= 1;
            tent++;
        } else {
            return -1;
        }
    }

    tent += ceil(u / 3.0);

    return tent;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int i, e, u;
        cin >> i >> e >> u; 
        int answer = solve(i, e, u); 
        cout << answer << endl; 
    }
    return 0;
}
