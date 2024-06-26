#include <iostream>

using namespace std;

#define ll long long


void solve(){
  int x,y,k;
  cin >> x >> y >> k;


  while(x>1 && k>0){
    int steps = y - x%y;
    if(steps >= k){
      x+=k;
      k=0;
    }
    else{
      x+=steps;
      k-=steps;
    }
    while(x%y ==0) x/=y;
  }

  if(k>0 && x==1){
    k = k % y-1;
    x+=k;
  }

  cout << x << "\n";
}


int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}