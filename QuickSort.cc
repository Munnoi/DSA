#include <iostream>
#define SIZE 20
using namespace std;

class QuickSort {
	int n;
	int a[SIZE];
public:
	void in();
	void out();
};

void QuickSort::in() {
	cout << "Enter the number of elements: ";
	cin >> n;

	cout << "Enter the elements of the array:" << endl;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void quicksort(int a[], int l, int h) {
	int low = l;
	int high = h;
	int key = a[(low + high) / 2];
	int tmp;

	do {
		while (key > a[low]) low++;
		while (key < a[high]) high--;
		if (low <= high) {
			tmp = a[low];
			a[low++] = a[high];
			a[high--] = tmp;
		}
	} while (low <= high);

	if (l < high) quicksort(a, l, high);
	if (h > low) quicksort(a, low, h);
}

void QuickSort::out() {
	quicksort(a, 0, n - 1);
	cout << "Elements after sorting: " << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int main () {
	QuickSort qs;
	qs.in();
	qs.out();

	return 0;
}