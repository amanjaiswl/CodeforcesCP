// https://neetcode.io/problems/products-of-array-discluding-self

#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<int> v;
  int num;
  while(cin >>num){
    v.push_back(num);
  }
  int total =1;
  for(int i:v){
    total *=i;
  }

  for(int i: v){
    cout << total/i << " " ;
  }
  cout << endl;
// without division
  int n= v.size();
  vector<int>result(n,1);
  int prefix=1;
  for(int i=0;i<n;i++){
    result[i] = prefix;
    prefix *= v[i];
  }

  int postfix = 1;
  for(int i=n-1;i>=0;i--){
    result[i] *= postfix;
    postfix *= v[i];
  }

  for(int i:result){
    cout << i << " ";
  }
  cout << endl;
  
  
}


