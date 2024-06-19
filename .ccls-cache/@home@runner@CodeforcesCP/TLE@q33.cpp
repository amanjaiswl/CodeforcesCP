// https://codeforces.com/problemset/problem/1606/A

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

void solve(){
  string s;
  cin >> s;
  int len = s.length();
  if(s[0] == s[len-1]){
    cout << s << "\n";
    return; 
  }
  else{
    cout << s.substr(0, len-1);
    if(s[len-1] == 'a'){
      cout << 'b' << "\n";
      return;
    }
    else{
      cout << 'a' << "\n";
      return;
    }
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
