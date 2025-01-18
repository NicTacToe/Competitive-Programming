#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int m, n;

  cout << "Enter the base (m) and the exponent(n): ";
  cin >> m >> n;

  int result = pow(m, n);

  cout << "\n" << m << " raised to the power " << n << " is: " << result << endl;
  return 0;
}