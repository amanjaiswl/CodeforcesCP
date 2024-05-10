#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    if(n<m)
      cout << n << " ";
    else
      cout << m << " " ;

    if(n>m)
      cout << n << " ";
    else
      cout << m << " ";

    cout << endl;
  }
}