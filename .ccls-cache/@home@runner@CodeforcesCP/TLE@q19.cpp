// https://codeforces.com/problemset/problem/1814/A

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=0;
    int r= s.length()-1;
    for(int i=0; i<n/2; i++){
      if ((s[r] == '0' && s[l] =='1' ) || ( s[r] =='1' && s[l] =='0') ){
        l++;
        r--;
      }
      else{
        break;
      }
    }
    cout << n-(2*l) << endl;
  }

  
  
}