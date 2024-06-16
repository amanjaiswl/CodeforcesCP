#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--){
    string s;
    cin >> s;
    int cnt1 = 0;
    int cnt2 =0;
    for(auto i : s){
      if(i == 'A'){
        cnt1++;
      }
      else{
        cnt2++;
      }
    }
    if(cnt1 > cnt2){
      cout << "A\n";
    }
    else{
      cout << "B\n";
    }

  }
  return 0;
}
