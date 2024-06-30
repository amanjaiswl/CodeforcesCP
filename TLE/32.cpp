//https://codeforces.com/problemset/problem/1607/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  ll x,n;
  cin>> x>>n;
  if(n%4 == 1){
    n= -n;
  }
  else if(n%4 == 2){
    n = 1;
  }
  else if(n%4 == 3){
    n++;
  }
  else{
    n=0;
  }
  if(x & 1){
    cout << x-n << "\n";
    return;
  }
  else{
    cout << x+n << "\n";
    return;
  } 
}

int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
