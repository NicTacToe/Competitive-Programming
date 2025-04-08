#include <bits/stdc++.h>
using namespace std;

void reverseWord(const string& str) {
  stringstream ss(str);
  string word;
  vector<string> words;

  while (ss >> word) {
    words.push_back(word);
  }

  for (int i = words.size() - 1; i >= 0; --i) {
    cout << words[i];
    if (i > 0) cout << " ";
  }
  cout << endl;
}

int main() {
  string str = "I froze orange juice";
  reverseWord(str);
  return 0;
}
