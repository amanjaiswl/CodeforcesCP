// https://neetcode.io/problems/is-palindrome

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void remove(string &str, const string &toremove){
  str.erase(remove_if(str.begin(), str.end(), [&toremove](char c){
    return toremove.find(c) != string::npos ;
  }), str.end());
  
}

bool isPalind(const string &str){
  int left =0;
  int right =str.size()-1;
  while(left < right){
    if(str[left]!= str[right]){
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main(){
  string s;
  getline(cin, s);

  string toremove = " ./:;,?(){}''";

  remove(s, toremove);

  transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){return tolower(c);});

  if(isPalind(s)){
    cout << "true" << endl;
  }
  else{
    cout << "false" << endl;
  }
}