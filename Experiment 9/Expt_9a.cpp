#include <iostream>
using namespace std;

class Stack {
private:
  int top;
  int size;
  int* arr;

public:
  Stack(int s) {
    size = s;
    arr = new int[size];
    top = -1;
  }

  ~Stack() {
    delete[] arr;
  }

  void push(int value) {
    if (top >= size - 1) {
      cout << "Stack Overflow\n";
      return;
    }
    arr[++top] = value;
  }

  int pop() {
    if (top < 0) {
      cout << "Stack Underflow\n";
      return -1;
    }
    return arr[top--];
  }

  int peek() {
    if (top < 0) {
      cout << "Stack is empty\n";
      return -1;
    }
    return arr[top];
  }

  bool isEmpty() {
    return top == -1;
  }

  void display() {
    if (top == -1) {
      cout << "Stack is empty\n";
      return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  Stack s(5);

  s.push(10);
  s.push(20);
  s.push(30);
  s.display();

  cout << "Popped: " << s.pop() << endl;
  s.display();

  return 0;
}