// Count number of words in string
#include <iostream>
using namespace std;

// Without STL solution
int noSTLCounter(string str) {
  int spaceCount = 0;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == ' ') {
      spaceCount++;
    }
  }
  return ++spaceCount;
}

// With STL Solution
#include <sstream>

int STLCounter(string str) {
  stringstream ss(str);
  string word;
  int count = 0;

  while (ss >> word) {
    count++;
  }

  return count;
}

int main() {
  string str = "Hello guys, welcome to my Minecraft server!";
  int countNoSTL = noSTLCounter(str);
  int countSTL = STLCounter(str);

  cout << "There are " << countNoSTL << " words in the string." << endl;
  cout << "There are " << countSTL << " words in the string." << endl;
  return 0;
}