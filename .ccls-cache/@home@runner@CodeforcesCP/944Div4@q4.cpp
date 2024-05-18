#include <iostream>
#include <string>
using namespace std;


void solve(){
  string s;
  cin >> s;

  int flag = 0;
  int cut = 0;
  for(int i=0; i<s.length()-1; ++i){
    if((s[i]=='1' &&s[i+1]=='1') || (s[i]=='0' &&s[i+1]=='0')){
      continue;
    }
    else if(flag ==0 && (s[i]=='0' && s[i+1]=='1')){
      flag = 1;
      continue;
    }
    else{
      cut++;
    }
  }
  cout << cut+1 << endl;
}

int  main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}