// https://neetcode.io/problems/validate-parentheses

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool balance(string bracket){
  stack<char> s;
  char c;

  int n = bracket.length();

  for(int i=0; i<n; i++){
    c = bracket[i];

    if(c == '(' || c== '{' || c== '['){
      s.push(c);
      continue;
    }

    if(s.empty())
      return false;

    switch (c){
      case  ')':
         if(s.top() != '(') return false;
         s.pop();
         break;
      case  '}':
         if(s.top() != '{') return false;
         s.pop();
         break;
      case  ']':
       if(s.top() != '[') return false;
       s.pop();
       break;
    }
    
  }
  return s.empty();
}

int main(){
  string brackets;
  
  cout << "give brackets" ;
  cin >> brackets;

  if(balance(brackets)){
    cout << "balanced" << endl;
  }
  else{
    cout << "unbalanced" << endl;
  }

  return 0;
}