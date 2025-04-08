#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str) {
  int n = str.length();
  int i = 0, j = n - 1;

  while (i < j) {
    if (str[i] != str[j])
      return 0;
    i++;
    j--;
  }
  return 1;
}

int main() {
  string str;

  cout << "Enter your string here. ";
  cin >> str;

  cout << (isPalindrome(str) ? "The entered string is a palindrome." : "The entered string is not a palindrome.") << endl;
  return 0;
}