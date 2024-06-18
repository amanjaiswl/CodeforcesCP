// https://codeforces.com/problemset/problem/1794/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin>>n ;
  vector<int>v(n);
  for(int i=0; i<n; i++){
    cin >> v[i];
    if(v[i] == 1) v[i]++;
  }
  
  for(int i=0;i <n-1;i++){
    if(v[i+1]%v[i] == 0){
      v[i+1]++;
      continue;
    
    }
  }
  for(auto i: v){
    cout << i << " ";
  }
  cout << "\n";

  
}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
