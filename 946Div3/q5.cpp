#include <iostream>
#include <vector>

using namespace std;


int main(){
  int t;
  cin >> t;
  while(t--){
    int m, x;
    cin >> m >> x;
    vector<int> arrc(m);
    vector<int> arrh(m);

    for (int i = 0; i < m; i++) {
        cin >> arrc[i] >> arrh[i];
    }


    
    int h=0;
    int bal=0;
    for(int i=0; i<m; i++){
      if(arrc[i] ==0 ){
        h+= arrh[i];
        bal += x;
        continue;
      }

      if(arrc[i] <= bal){
        h+= arrh[i];
        bal -= arrc[i];
        bal +=x;
      }
      else{
        bal+=x;
        continue;
      }
    
  }
    cout << h << endl;
}}