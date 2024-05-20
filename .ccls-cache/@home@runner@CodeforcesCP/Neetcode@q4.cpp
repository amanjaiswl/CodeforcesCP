// https://leetcode.com/problems/concatenation-of-array/description/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    vector<int> ans(2 * n);

    for (int i = 0; i < n; ++i) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    for (int i = 0; i < 2 * n; ++i) {
        cout << ans[i] << " ";
    }
  cout << endl;

    return 0;
}
