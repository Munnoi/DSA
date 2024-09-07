#include <iostream>
using namespace std;

const int SIZE = 4;

class Queue {
  int front, rear;
  int queue[SIZE];
public:
  Queue() { front = rear = -1; }
  void qdelete();
  void qinsert();
  void qdisplay();
};

void Queue::qdelete() {
  if (front == -1) cout << "Queue is empty!" << endl;
  else {
    cout << "Deleted item: " << queue[front] << endl;

    if (front == rear) front = rear = -1;
    else front++;
  }
}

void Queue::qinsert() {
  int num;
  
  if (rear == SIZE - 1) cout << "Queue is full!" << endl;
  else {
    cout << "Enter the number: ";
    cin >> num;
    queue[++rear] = num;
    if (front == -1) front++;
  }
}

void Queue::qdisplay() {
  if (front == -1 || front > rear) cout << "Queue is empty!" << endl;
  else {
    for (int i = front; i <= rear; i++)
      cout << queue[i] << " ";
    cout << endl;
  }
}

int main() {
  Queue q;
  int choice;
  char ch;
  do {
    cout << "1.Insert\n2.Delete\n3.Display" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) q.qinsert();
    else if (choice == 2) q.qdelete();
    else if (choice == 3) q.qdisplay();
    else cout << "Invalid choice!" << endl;

    cout << "Do you want to continue?(y/n): ";
    cin >> ch;
  } while (ch == 'y' || ch == 'Y');

  return 0;
}