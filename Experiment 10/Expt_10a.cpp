#include <iostream>
using namespace std;

class Queue {
  int* arr, front, rear, capacity;

public:
  Queue(int size) : front(0), rear(-1), capacity(size) {
    arr = new int[capacity];
  }

  ~Queue() { delete[] arr; }

  bool isFull() { return rear == capacity - 1; }
  bool isEmpty() { return front > rear; }

  void enqueue(int value) {
    if (isFull()) cout << "Queue full\n";
    else arr[++rear] = value;
  }

  int dequeue() {
    if (isEmpty()) return cout << "Queue empty\n", -1;
    return arr[front++];
  }

  int peek() {
    return isEmpty() ? (cout << "Queue empty\n", -1) : arr[front];
  }

  void display() {
    if (isEmpty()) cout << "Queue empty\n";
    else {
      for (int i = front; i <= rear; i++) cout << arr[i] << " ";
      cout << endl;
    }
  }
};

int main() {
  Queue q(5);
  q.enqueue(10); q.enqueue(20); q.enqueue(30);
  q.display();
  q.dequeue();
  q.display();
  cout << "Front: " << q.peek() << endl;
  return 0;
}