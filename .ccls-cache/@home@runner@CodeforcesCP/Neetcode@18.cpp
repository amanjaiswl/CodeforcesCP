// https://neetcode.io/problems/generate-parentheses

#include <bits/stdc++.h>

class Solution{
public : 
    vector<string> genparen(int n){
      vector<string> res;
      backtrack(n, 0 , 0, "", res);
      return res;
    }

private : 
   void backtrack(int n, int openN, int closedN, string current, vector<string> &res){
     if(openN == closedN && openN == n){
       res.push_back(current);
       return;
     }
     if(openN < n){
       backtrack(n, openN +1, closedN, current + "(", res);
     }
     if(closedN < openN){
       backtrack(n, openN, closedN+1, current + ")",res);
     }
     
   }
}




int main(){
  return 0;
}