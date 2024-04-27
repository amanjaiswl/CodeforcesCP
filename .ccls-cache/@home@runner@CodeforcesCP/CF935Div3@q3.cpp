#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int solve() {
    int n;
    cin >> n;
    string houses;
    cin >> houses;

    int leftCount = 0, rightCount = count(houses.begin(), houses.end(), '1');
    int bestLine = -1;
    int minDist = n;
    double halfN = n / 2.0;

  for (int line = 0; line <= n; line++) {
      int leftSatisfied = leftCount;
      int rightSatisfied = rightCount;
      // cout << "Line: " << line << ", Left Satisfied: " << leftSatisfied << ", Right Satisfied: " << rightSatisfied << endl;

      int needLeft = ceil(line / 2.0);
      int needRight = ceil((n - line) / 2.0);

      if (leftSatisfied >= needLeft && rightSatisfied >= needRight) {
          double dist = abs(halfN - line);
          if (dist < minDist || (dist == minDist && line < bestLine)) {
              bestLine = line;
              minDist = dist;
          }
      }

      if (line < n) {
          if (houses[line] == '0') leftCount++;
          if (houses[line] == '1') rightCount--;
      }
  }


    if (bestLine == -1) {
        int allRightSatisfied = count(houses.begin(), houses.end(), '1');
        if (allRightSatisfied >= ceil(n / 2.0)) {
            return 0;  
        }
    }

    return bestLine;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
