// https://codeforces.com/problemset/problem/1380/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin>> n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
  }

  for(int i=0;i<n-2;i++){
    if(v[i] < v[i+1] && v[i+1] > v[i+2]){
      cout << "YES\n";
      cout << i+1 << " "<<i+2<<" "<<i+3<<"\n";
      return;
    }
  }
  cout << "NO\n";

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
