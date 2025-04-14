#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
  if (op == '*' || op == '/') return 2;
  if (op == '+' || op == '-') return 1;
  return 0;
}

bool isOperator(char ch) {
  return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

string infixToPostfix(string str) {
  stack<char> op;
  string postfix = "";

  for (char ch : str) {
    if (ch == ' ') continue;
    if (isalnum(ch)) {
      postfix += ch;
    } else if (ch == '(') {
      op.push(ch);
    } else if (ch == ')') {
      while (!op.empty() && op.top() != '(') {
        postfix += op.top();
        op.pop();
      }
      if (!op.empty()) op.pop();
    } else if (isOperator(ch)) {
      while (!op.empty() && precedence(op.top()) >= precedence(ch) && op.top() != '(') {
        postfix += op.top();
        op.pop();
      }
      op.push(ch);
    }
  }

  while (!op.empty()) {
    postfix += op.top();
    op.pop();
  }

  return postfix;
}

int main() {
  string infix;
  cout << "Enter infix expression: ";
  getline(cin, infix);

  string postfix = infixToPostfix(infix);
  cout << "Postfix: " << postfix << endl;

  return 0;
}