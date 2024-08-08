#include <iostream>
using namespace std;

class Binarysearch {
  int size; // Size of the array
  int *arr; // Dynamic array
  int item; // Item to be searched
public:
  Binarysearch (int size) { arr = new int[size]; this->size = size; }
  ~Binarysearch() { delete [] arr; }
  void in(); // For reading the array
  void out(); // Logic
};

void Binarysearch::in() {
  cout << "Enter the array elements:" << endl;
  for (int i = 0; i < size; i++)
    cin >> arr[i];
}
void Binarysearch::out() {
  cout << "Enter the element to be searched: ";
  cin >> item;

  int beg = 0;
  int end = size - 1;
  int mid;
  while (beg <= end) {
    mid = (end - beg) / 2;

    if (arr[mid] == item) {
      cout << "Element found at pos " << mid + 1 << endl;
      return;
    } else if (arr[mid] < item) beg = mid + 1;
    else end = mid - 1;
  }
  cout << "Element not found!" << endl;
}

int main () {
  int N;
  cout << "Enter the size of the array: ";
  cin >> N;
  Binarysearch bs(N);
  bs.in();
  bs.out();
   
  return 0;
}