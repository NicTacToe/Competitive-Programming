#include <bits/stdc++.h>
using namespace std;

bool isMatching(char open, char close) {
  return (open == '(' && close == ')') ||
         (open == '{' && close == '}') ||
         (open == '[' && close == ']');
}

bool isBalanced(string x) {
  stack<char> s;
  for (char ch : x) {
    if (ch == '(' || ch == '{' || ch == '[') {
      s.push(ch);
    } else if (ch == ')' || ch == '}' || ch == ']') {
      if (s.empty() || !isMatching(s.top(), ch))
        return false;
      s.pop();
    }
  }
  return s.empty();
}

int main() {
  string x;
  cout << "Enter expression: ";
  getline(cin, x);

  if (isBalanced(x))
    cout << "Balanced\n";
  else
    cout << "Not Balanced\n";

  return 0;
}