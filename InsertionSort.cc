#include <iostream>
using namespace std;

class Insertionsort {
  int *arr;
  int size;
public:
  Insertionsort (int size) { arr = new int[size]; this->size = size; }
  ~Insertionsort() { delete [] arr; }
  void in();
  void out();
  void display();
};

void Insertionsort::in() {
  cout << "Enter the array elemenis:" << endl;
  for (int i = 0; i < size; i++)
    cin >> arr[i];
}
void Insertionsort::out() {
  int key, j;
  for (int i = 1; i < size; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
void Insertionsort::display() {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main () {
  int n;
  cout << "Enter the array size: ";
  cin >> n;
  Insertionsort is(n);

  is.in();
  is.out();
  is.display();
  
  return 0;
}