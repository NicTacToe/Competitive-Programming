#include <bits/stdc++.h>
using namespace std;

const int SIZE = 256;

int isAnagram(string& str1, string& str2) {
  if (str1.length() != str2.length()) 
    return 0;

  int count1[SIZE] = {0};
  int count2[SIZE] = {0}; 

  for (int i = 0; i < str1.length(); i++) {
    count1[str1[i]]++;
    count2[str2[i]]++;
  }

  for (int i = 0; i < SIZE; i++) {
    if (count1[i] != count2[i])
      return 0;
  }
  return 1;
}

int main() {
  string str1 = "listen";
  string str2 = "silent";

  cout << (isAnagram(str1, str2) ? "\nstr1 and str2 are anagrams." : "\nstr1 and str2 are not anagrams.");
  return 0;
}