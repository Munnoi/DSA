#include <iostream>
using namespace std;

class Stack {
  int *arr;
  int size;
  int top;
public:
  Stack (int size) {
    arr = new int[size];
    this->size = size;
    top = -1;
  }
  ~Stack() { delete [] arr; }
  // void in(); // inputting
  void traverse(); // traversing
  void push();
  void pop();
};

// void Stack::in() {
//   cout << "Enter the array elements:" << endl;
//   for (int i = 0; i < size; i++)
//     cin >> arr[i];
// }

void Stack::push() {
  int item;

  if (top == size - 1) cout << "Stack is full" << endl;
  else {
    cout << "Enter the element to be inserted: ";
    cin >> item;
    arr[++top] = item;
  }
}

void Stack::pop() {
  int item;

  if (top == -1) cout << "Stack is empty" << endl;
  else item = arr[top--];
}

void Stack::traverse() {
  if (top == -1) cout << "Stack is empty" << endl;
  else {
    cout << "Stack is:" << endl;
    for (int i = top; i >= 0; i--)
      cout << arr[i] << endl;
  }
}

int main () {
  Stack s(5);
  
  char ch;
  int choice;
  do {
    cout << "1.PUSH\n2.POP\n3.Display" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) s.push();
    else if (choice == 2) s.pop();
    else if (choice == 3) s.traverse();
    else cout << "Invalid choice!" << endl;

    cout << "Do you want to continue?(y/n): ";
    cin >> ch;
  } while (ch == 'y' || ch == 'Y');

  return 0;
}