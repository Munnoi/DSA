#include <iostream>
using namespace std;

class Bubblesort {
  int *arr;
  int size;
public:
  Bubblesort (int size) { arr = new int[size]; this->size = size; }
  ~Bubblesort() { delete [] arr; }
  void in();
  void out();
  void display();
};

void Bubblesort::in() {
  cout << "Enter the array elements:" << endl;
  for (int i = 0; i < size; i++)
    cin >> arr[i];
}
void Bubblesort::out() {
  int tmp;
  for (int i = 0; i < size - 1; i++)
    for (int j = 0; j < size - i - 1; j++)
      if (arr[j] > arr[j + 1]) {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
}
void Bubblesort::display() {
  cout << "The array is:" << endl;
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main () {
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  Bubblesort bs(size);
  bs.in();
  bs.out();
  bs.display();
  
  return 0;
}