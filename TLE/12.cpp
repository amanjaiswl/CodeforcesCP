// https://codeforces.com/problemset/problem/1859/A
// easy question but  couldn't get it. did this after seeing the solution.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(int i=0; i<n;i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());
  if(v[0]==v[n-1]){
    cout << -1 << endl;
    return;
  }
  else{
    int it=0;
    while(v[0]==v[it]) it++;
    cout << it << " " <<n-it << endl;
    for(int i=0;i<it;i++){
      cout << v[i] << " ";
    }
    cout<< endl;
    for(int i=it;i<n;i++){
      cout << v[i] << " ";
    }
    cout << endl;
  }
}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin>>t;
  while(t--){
    solve();
  }
}