#include <iostream>
using namespace std;

class Selectionsort {
  int *arr;
  int size;
public:
  Selectionsort (int size) { arr = new int[size]; this->size = size; }
  ~Selectionsort() { delete [] arr; }
  void in();
  void out();
  void display();
};

void Selectionsort::in() {
  cout << "Enter the array elemenss:" << endl;
  for (int i = 0; i < size; i++)
    cin >> arr[i];
}
void Selectionsort::out() {
  int tmp;
  for (int i = 0; i < size - 1; i++)
    for (int j = i + 1; j < size; j++)
      if (arr[i] > arr[j]) {
        tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
      }
}
void Selectionsort::display() {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main () {
  int n;
  cout << "Enter the array size: ";
  cin >> n;
  Selectionsort ss(n);

  ss.in();
  ss.out();
  ss.display();
  
  return 0;
}