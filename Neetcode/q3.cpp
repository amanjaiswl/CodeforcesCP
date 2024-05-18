// https://leetcode.com/problems/two-sum/description/

// bruteforce . nsquare
#include <iostream>
#include<vector>
using namespace std;

int main(){

  vector<int> v;
  int num;
  while(cin >> num){
    v.push_back(num);
  }
  int target = v.back();
  v.pop_back();

 
  
  for(int i=0; i<v.size() ; i++){
    for(int j=i+1; j<v.size(); ++j){
      if(v[i] + v[j] == target){
        cout << i << ", " << j << endl;
        return 0;
      }
    }
  }
  return 0;
}

// more efficient code , storing complement using unordered_map, n

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> num_map; 
//     for (int i = 0; i < nums.size(); i++) {
//         int complement = target - nums[i];
//         if (num_map.find(complement) != num_map.end()) {
//             return {num_map[complement], i};
//         }
//         num_map[nums[i]] = i;
//     }
//     return {}; 
// }

// int main() {
//     vector<int> nums;
//     int num;

//     while (cin >> num) {
//         nums.push_back(num);
//     }

//     int target = nums.back();
//     nums.pop_back();

//     vector<int> result = twoSum(nums, target);

//     if (!result.empty()) {
//         cout << result[0] << ", " << result[1] << endl;
//     } else {
//         cout << "No solution found" << endl;
//     }

//     return 0;
// }
