#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  int n, x;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter " << n << " integers:\n";
  for (int i = 0; i < n; i++) {
    cin >> x;
    q.push(x);
  }

  int count = 0;
  queue<int> temp;

  while (!q.empty()) {
    temp.push(q.front());
    q.pop();
    count++;
  }

  while (!temp.empty()) {
    q.push(temp.front());
    temp.pop();
  }

  cout << "Queue size without using size(): " << count << endl;

  return 0;
}