#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int actions = 0;
        int flag =0;
int j=0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') { 
                 j = i;
              int k =0;
                while (j < n && s[j] == '.'){
                  k++;
                  j++;
                if(k==3){
                  flag = 1;
                  cout << 2 << endl;
                  break;
                }}
               if(k<3){
                 actions+=k;
               }
              else{
                break;
              }
                i = j - 1; 
            }
        }
      
        if(flag==0){
        cout << actions << endl;}
    }
    return 0;
}
