#include <iostream>
using namespace std;

class Linearsearch {
  int size; // Size of the array
  int *arr; // Dynamic array
  int item; // Item to be searched
public:
  Linearsearch (int size) { arr = new int[size]; this->size = size; }
  ~Linearsearch() { delete [] arr; }
  void in(); // For reading the array
  void out(); // Logic
};

void Linearsearch::in() {
  cout << "Enter the array elements:" << endl;
  for (int i = 0; i < size; i++)
    cin >> arr[i];
}
void Linearsearch::out() {
  cout << "Enter the element to be searched: ";
  cin >> item;

  for (int i = 0; i < size; i++)
    if (arr[i] == item) {
      cout << "Element found at loc " << i + 1 << "." << endl; 
      return;
    }
  cout << "Element not found!" << endl;
}

int main () {
  int N;  
  cout << "Enter the size of the array: ";
  cin >> N;
  Linearsearch ls(N);
  ls.in();
  ls.out();
   
  return 0;
}