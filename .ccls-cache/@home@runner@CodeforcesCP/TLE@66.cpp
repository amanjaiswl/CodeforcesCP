#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long


void solve(){
  int n , x, a[100000];
  cin >> n >> x;
  int ops = 0;
  for(int i=0;i < 3; i++){
    for(int j=0; j<n; j++){
      cin >> a[j];
    }
    for(int k = 0; k<n;k++){
      if ((x | a[k]) != x) break;
      ops |= a[k];
    }
  }

  if(ops == x) cout << "YES\n";
  else cout << "NO\n";

}



int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
