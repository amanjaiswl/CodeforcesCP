#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

bool correctParens(const string& s) {
    unordered_map<char, char> matchingBracket = {{')', '('}, {'}', '{'}, {']', '['}};
    stack<char> stack;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stack.empty() || stack.top() != matchingBracket[c]) {
                return false;  
            }
            stack.pop();
        }
    }

    return stack.empty();  
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;
    cout << (correctParens(s) ? "Balanced" : "Not balanced") << endl;
    return 0;
}
