#include <iostream>

using namespace std;

int main(){
  int t;
  cin>> t;
  while(t--){
    int n, a,b;
    cin>>n>>a>>b;
    if(a == n && b == n){
      cout << "YES\n";
    }
    else if((a+b+2) <=n){
      cout << "YES\n";
    }
    else{
      cout <<"NO\n";
    }
  }
}