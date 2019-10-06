#include <iostream>

using namespace std;

void swap(int *n, int *m) {
	
	int tmp;
	tmp = *m;
	*m = *n;
	*n = tmp;
}

void print(int a[], int size)
 {
	for (int i = 0; i < size;  i++ ) cout << a[i] << " ";
	
	cout << endl;
}

void SelectionSort(int a[], int size) {
	
	int min;

	// traverse the entire array 

	for (int i = 0; i < size; i++) {
		
		// find the min 
		min = i;
	
		// compare against all other elements 
		for (int j = i + 1; j < size; j++) 
		{
			if (a[j] < a[min]) 
				min = j;
		}

		swap(a[min],a[i]);
		print(a,size);
	}
}

int main()
{
	int a[] = {4,6,9,1,2,0,8,7,5,3};

	const size_t size = sizeof(a)/sizeof(a[0]);

	print(a,size);
	cout << "---------------------\n" ;
	SelectionSort(a, size);
}