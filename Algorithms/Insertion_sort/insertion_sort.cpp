#include <iostream>
#include <iomanip>

using namespace std;

void swap(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

void insertion(int a[], int size)
{
	for(int i=1; i  < size; i++) 
	{
		int j = i;

		while(j > 0 && (a[j] < a[j-1])) {
			swap(a[j], a[j-1]);
			j--;
		}

		cout << endl;
		for (int k = 0; k < size; k++)
			 cout << setw(3) << a[k];
	}
}

int main()
{
	int a[] = { 15, 9, 8, 1, 4, 11, 7, 12, 13, 6, 5, 3, 16, 2, 10, 14};

	int size = sizeof(a)/sizeof(int);

	for (int i = 0; i < size; i++) 
		cout << setw(3) << a[i];

	insertion(a, size);
	cout << endl;
	return 0;
}