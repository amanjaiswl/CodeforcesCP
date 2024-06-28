#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <unordered_set>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin >> n;
  vector<int> v(n);
  for(auto &i :v ){
    cin >> i;
  }

  cout << (unordered_set<int>(v.begin(), v.end()).size() < n ? "YES\n" : "NO\n");
  

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
