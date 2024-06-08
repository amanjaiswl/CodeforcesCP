// https://neetcode.io/problems/minimum-stack

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

class MinStack {
private:
    std::stack <int> stack;
    std::stack <int> minStack;
    
public:
    MinStack() {

    }

    void push(int val) {
      stack.push(val);
      if(minStack.empty()){
        minStack.push(val);
      }
      else{
        int minimum = min(val, minStack.top());
        minStack.push(minimum);
      }

    }

    void pop() {
      stack.pop();
      minStack.pop();

    }

    int top() {
      return stack.top();

    }

    int getMin() {
      return minStack.top();

    }
};

int main(){
  return 0;
}