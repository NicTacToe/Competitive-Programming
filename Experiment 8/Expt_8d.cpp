#include <bits/stdc++.h>
using namespace std;

const int SIZE = 256;

int firstRepeatChar(string& str) {
  int count[SIZE] = {0};
  int firstIndex[SIZE];
  fill(firstIndex, firstIndex + SIZE, -1);

  for (int i = 0; i < str.length(); i++) {
    unsigned char ch = str[i];
    if (count[ch] == 0)
      firstIndex[ch] = i;

    count[ch]++;
    if (count[ch] > 1) {
      cout << "\nFirst repeating character: '" << ch << "' at index " << firstIndex[ch];
      return 1;
    }
  }

  return 0;
}

int main() {
  string str = "no rep!y";

  if (!firstRepeatChar(str))
    cout << "\nThere are no repeating letters in the string.";

  return 0;
}