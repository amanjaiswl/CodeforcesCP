// https://codeforces.com/problemset/problem/1853/A
// my solution is n lg n. could have done in n by checking the sorted thing while reading the input. using flag and arr[i] > arr[i-1]. plus no use of this extra space.

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
  int n;
  cin >> n;
  vector <int> arr(n);
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

    vector <int> arr2(arr);

    sort(arr2.begin(),arr2.end());
    if(arr2 != arr){
      cout << 0 << endl;
    }
      else if(arr2 == arr && n==1){
        cout << 0 << endl;
      }

    else{

  double lowestdiff = arr[1] - arr[0];
  for(int i=2; i<n;i++){
    int currdiff = arr[i] - arr[i-1];
    if(currdiff < lowestdiff){
      lowestdiff = currdiff;
    }
  }
  lowestdiff += 1;
  int x = ceil(lowestdiff/2);
  cout << x << endl;
    }
}}