#include <bits/stdc++.h>
using namespace std;

int isSubString(string srcstring, string findstring) {
  int i = 0, j = 0;
  while (i < srcstring.length() && j < findstring.length()) {
    if (srcstring[i] == findstring[j]) {
      j++;
    }
    i++;
  }

  if (j == findstring.length())
    return 1;
  else
    return 0;
}

int main() {
  string srcstring = "Apple Bottom Jeans";
  string findstring = "Boots With The Fur";

  cout << (isSubString(srcstring, findstring) ? "\nfindstring is a subset of srcstring." : "\nfindstring is not a substring of srcstring.");
  return 0;
}