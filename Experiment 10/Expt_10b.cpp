#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;

  q.push(10);
  q.push(20);
  q.push(30);

  cout << "Front: " << q.front() << endl;
  cout << "Back: " << q.back() << endl;

  q.pop();

  cout << "After pop, front: " << q.front() << endl;

  cout << "Queue: ";
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}