#include <iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    int n;
    cin >> n;
    for(int r=0;r<2*n;r++){      
      for(int c=0;c<2*n;c++){
        
        if(c/2 + r/2 &1){
          cout << ".";
        }
        else{
          cout << "#";
        }
    }
      cout <<"\n";
  }}
  return 0;
}