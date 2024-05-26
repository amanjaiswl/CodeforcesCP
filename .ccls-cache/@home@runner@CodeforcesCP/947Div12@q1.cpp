//  this is ques 2
// so could not do it in the contest. I was being naive and checking both. but let's say that the sorted seq is 2,4,7,8,10. so it would n't work.

/* this is my original submission which failed pretest 2
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

using namespace std;


void solve(){
  long long n;
  cin >> n;
  vector<long long> a(n);
  for (long i = 0; i < n; ++i) {
      cin >> a[i];
  }
  sort(a.begin(), a.end());

  long long first = a[0];
  if(n>1){
  long long second = a[1];

  for(long long i=0; i<n; i++){
    if(  ((a[i]%first) != 0) &&  ((a[i]%second) != 0)  ){
      cout << "no" << endl;
      return;
    }
    
  }}
  cout << "yes" << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
*/

//  The correct code

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int flag=0;
      int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]==1)flag=1;
        }
        if(flag)cout<<"Yes" << endl;
        else{
            sort(a+1,a+1+n);
            vector<int> b;
            for(int i=2;i<=n;i++){
                if(a[i]%a[1])b.push_back(a[i]);
            }
            sort(b.begin(),b.end());
            n = b.size();
            for(int j=1;j<n;j++){
                if(b[j]%b[0]){
                    flag=1;
                    break;
                }
            }
            if(!flag)cout<<"Yes" << endl;
            else cout<<"No"<< endl;
        }

    }
}