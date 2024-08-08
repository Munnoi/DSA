#include <iostream>
using namespace std;

class test {
  int *arr;
  int size;
public:
  test (int size) { arr = new int[size]; this->size = size; }
  ~test() { delete [] arr; }
  void in();
  void out();
  void display();
};

void test::in() {
  cout << "Enter the array elements:" << endl;
  for (int i = 0; i < size; i++)
    cin >> arr[i];
}
void test::out() {
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
void test::display() {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main () {
  int n;
  cout << "Enter the array size: ";
  cin >> n;
  test ts(n);

  ts.in();
  ts.out();
  ts.display();
  
  return 0;
}