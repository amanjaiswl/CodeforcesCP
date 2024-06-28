#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long

void solve(){
  int a,b;
  cin>> a >>b;

  int ans = 1e9;

  for(int i=0; i<30; i++){
    if(b+i == 1) continue;
    int ops = i;
    int x = a;
    while(x>0){
      x/= b+i;
      ops++;
    }
    ans = min(ops,ans);
  }

  cout << ans << '\n';

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
