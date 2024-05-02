#include <iostream>

using namespace std;

int gcd(int x, int i){
  if(i == 0) return x;
  return gcd(i, x%i);
}

int solve(){
  int x;
  cin >> x;
  int max = 0;
  int ans;
  int index = 0;
  for(int i=1; i<x; i++){
    ans = gcd(x, i);
    // cout << ans << endl;
    ans = ans +i;
    if(ans > max) {
      index = i;
      max = ans;
    }
  }
  return index;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int answer = solve();
    cout << answer << endl;
  }
}