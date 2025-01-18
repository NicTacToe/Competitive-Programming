#include <iostream>
using namespace std;

// Without STL Solution
int fibb(int n) {
  if (n == 0) {
    return 0;
  }
  else if (n == 1) {
    return 1;
  }
  else {
    return fibb(n - 1) + fibb(n - 2);
  }
}

int main() {
  int n = 10;
  for (int i = 0; i < n; i++) {
    cout << fibb(i) << " ";
  }
  return 0;
}