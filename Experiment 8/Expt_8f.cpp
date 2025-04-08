#include <bits/stdc++.h>
using namespace std;

bool areRotations(string s1, string s2) {
  if (s1.length() != s2.length())
    return false;

  int len = s1.length();

  for (int i = 0; i < len; i++) {
    string rotated = s1.substr(i) + s1.substr(0, i);

    if (rotated == s2)
      return true;
  }

  return false;
}

int main() {
  string s1 = "ABCD";
  string s2 = "CDAB";

  if (areRotations(s1, s2))
    cout << "Yes, the strings are rotations of each other.\n";
  else
    cout << "No, the strings are not rotations of each other.\n";

  return 0;
}