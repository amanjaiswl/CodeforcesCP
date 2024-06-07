#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
  int t;
  cin>> t;
  while(t--){
    string s;
    cin >> s;
    int hour = stoi(s.substr(0, 2)); 
    if(s[0]=='0' && s[1]=='0'){
      cout << "12" << ":" << s[3] << s[4] << " " << "AM\n";
    }
    else if(hour < 12){
      cout << s << " " << "AM\n";
    }
      else if(hour ==12 ){
        cout << s << " " << "PM\n";
      }
    else{
      int x = hour - 12;
      if(x<10){
        cout << "0";
      }
      cout << x << ":" << s[3] << s[4] << " " << "PM\n";
    }
  }
}