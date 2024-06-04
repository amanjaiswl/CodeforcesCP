// doing it in constant time, less goo. 

#include <iostream>

using namespace std;

int main(){
  int t;
  cin>> t;
  while(t--){
    int n;
    cin>> n;
    if(n<10){
      cout << n << "\n";
    }
    else if(n<=100){
      cout << 9 + (n/10) <<"\n";
    }
    else if(n<=1000){
      cout << 18 + (n/100) << "\n";
    }
    else if(n<=10000){
      cout << 27 + (n/1000)<<"\n";
    }
    else if(n<= 100000){
      cout << 36 + (n/10000) << "\n";
    }
    else if(n<= 1000000){
      cout << 45 + (n/100000) << "\n";
    }
    else if(n<= 10000000){
      cout << 54 + (n/1000000) << "\n";
    }
  }
}