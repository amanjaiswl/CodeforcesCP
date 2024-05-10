#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int len = s.size();
    int flag = 0;
    
    for (int i = 0; i < len - 1; i++) {
        if (s[i] != s[i + 1]) {
            flag = true;
            break;  
        }
    }

    
    if(flag !=0){
      cout << "Yes" << endl;
      cout << s[len-1];
      for(int i=0; i<len-1; i++){
        cout << s[i];
      }
      cout << endl;
    }
    else
      cout << "No" << endl;
    
  }
}