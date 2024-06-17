// https://codeforces.com/problemset/problem/1837/B

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int cnt = 1;
  int cost = 1;
  for(int i=0; i<n-1; i++){
    if(s[i] == '<' && s[i+1] == '<'){
      cnt++;
      cost = max(cost,cnt);
    }
    else if(s[i] == '>' && s[i+1] == '>'){
      cnt++;
      cost =max(cost,cnt);
    }
    else{
      cnt = 1;
    }
  }
  cout << cost +1 << "\n";


}




int main(){
  int t;
  cin>>t;
  while (t--){
    solve();

  }
  return 0;
}
