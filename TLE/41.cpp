// https://codeforces.com/problemset/problem/1373/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  string s;
  cin >> s;
  int cnt1= 0;
  int cnt0=0;
  for(auto c :s){
    if(c == '1'){
      cnt1++;
    }
    else cnt0++;
  }
  int pair = min(cnt0, cnt1);
  if(pair & 1 ){
    cout <<"DA\n";
    return;
  }
  cout << "NET\n";

}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();
  }
  return 0;
}
