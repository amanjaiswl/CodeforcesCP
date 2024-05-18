#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_draws(int p1, int p2, int p3) {
    if ((p1 + p2 + p3) % 2 != 0) {
        return -1;
    }

    int totalGame = (p1 + p2 + p3) / 2;
    int MaxDraws = min(totalGame, p1 + p2);

    return MaxDraws;
}

int main() {
    int t;
    cin >> t;  
    vector<int> results;

    for (int i = 0; i < t; ++i) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        results.push_back(max_draws(p1, p2, p3));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
