// competition ended. doing it to see if i am able to solve it
// again, the solution is write, even checked with diffchecker, but shows testcase failed. :(

#include <iostream>
#include <vector>

using namespace std;

long long calcScore(int start, const vector<int>& permArr, const vector<int>& pointArr, int k) {
    long long totalScore = 0;
    int current = start - 1; 

    for (int i = 0; i < k; ++i) {
        int currScore = pointArr[current];
        totalScore += currScore;

        int nextIndex = permArr[current] - 1; // Next potential pos
        int nextScore = pointArr[nextIndex];

        if (nextScore > currScore) {
            current = nextIndex; 
        } else {
            totalScore += currScore * (k - i - 1); 
            break; 
        }
    }

    return totalScore;
}

void solve() {
    int n, k, Pb, Ps;
    cin >> n >> k >> Pb >> Ps;

    vector<int> permArr(n), pointArr(n);
    for (int i = 0; i < n; ++i) cin >> permArr[i];
    for (int i = 0; i < n; ++i) cin >> pointArr[i];

    long long scoreBodya = calcScore(Pb, permArr, pointArr, k);
    long long scoreSasha = calcScore(Ps, permArr, pointArr, k);

    if (scoreBodya > scoreSasha) {
        cout << "Bodya\n";
    } else if (scoreSasha > scoreBodya) {
        cout << "Sasha\n";
    } else {
        cout << "Draw\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
