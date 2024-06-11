#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    string a;
    cin>> a;
    string b;
    cin >> b;
    cout << b[0] << a[1] << a[2] << " ";
    cout << a[0] << b[1] << b[2] << "\n";
    

  }
  return 0;
}
