#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> dq;

  dq.push_back(10);
  dq.push_back(20);

  dq.push_front(5);
  dq.push_front(2);

  cout << "Deque: ";
  for (int x : dq) cout << x << " ";
  cout << endl;

  dq.pop_front();

  dq.pop_back();

  cout << "After popping front and back: ";
  for (int x : dq) cout << x << " ";
  cout << endl;

  return 0;
}