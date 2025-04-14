#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string str) {
  stack<int> nums;
  stringstream ss(str);
  string token;

  while (ss >> token) {
    if (isdigit(token[0])) {
      nums.push(stoi(token));
    } else {
      int b = nums.top(); nums.pop();
      int a = nums.top(); nums.pop();
      if (token == "+") nums.push(a + b);
      else if (token == "-") nums.push(a - b);
      else if (token == "*") nums.push(a * b);
      else if (token == "/") nums.push(a / b);
    }
  }

  return nums.top();
}

int main() {
  string str;
  cout << "Enter postfix expression (seperate tokens by spaces): ";
  getline(cin, str);

  int result = evaluatePostfix(str);
  cout << "Result: " << result << endl;

  return 0;
}