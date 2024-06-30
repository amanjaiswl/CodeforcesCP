// https://codeforces.com/problemset/problem/1858/A
// did it after looking at the solution. was a easy question

#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int a,b,c;
    cin >> a>> b>> c;
    int x = c%2;
    if(x==0){
      if(a>b){
        cout << "First" << endl;
      }
      else{
        cout << "Second" << endl;
      }
    }
    else{
      if(b>a){
        cout << "Second" << endl;
      }
      else{
        cout << "First" << endl;
      }
    }
  }
}