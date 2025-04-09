#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int value) {
    data = value;
    next = nullptr;
  }
};

class Stack {
private:
  Node* top;

public:
  Stack() {
    top = nullptr;
  }

  ~Stack() {
    while (top) {
      Node* temp = top;
      top = top->next;
      delete temp;
    }
  }

  void push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
  }

  int pop() {
    if (!top) {
      cout << "Stack Underflow\n";
      return -1;
    }
    int value = top->data;
    Node* temp = top;
    top = top->next;
    delete temp;
    return value;
  }

  int peek() {
    if (!top) {
      cout << "Stack is empty\n";
      return -1;
    }
    return top->data;
  }

  bool isEmpty() {
    return top == nullptr;
  }

  void display() {
    if (!top) {
      cout << "Stack is empty\n";
      return;
    }
    cout << "Stack elements: ";
    Node* temp = top;
    while (temp) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  Stack s;

  s.push(10);
  s.push(20);
  s.push(30);
  s.display();

  cout << "Popped: " << s.pop() << endl;
  s.display();

  return 0;
}
