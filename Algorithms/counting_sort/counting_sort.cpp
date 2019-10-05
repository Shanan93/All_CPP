#include <iostream>

using namespace std;

void print(int a[], int size) 
{
	for (int i = 0; i < size;  i++ )
	{
		 cout << a[i] << " ";
		 cout << endl;
	}
}

void CountingSort(int arr[], int size) 
{
	
	int i, j, k;
	int index = 0;
	int min, max;
 
	min = max = arr[0];

	for(i = 1; i < size; i++) 
	{
		min = (arr[i] < min) ? arr[i] : min;
		max = (arr[i] > max) ? arr[i] : max;
	}
 
	k = max - min + 1;

	/* creates k buckets */

	int *B = new int [k]; 

	for(i = 0; i < k; i++) 
		B[i] = 0;

	for(i = 0; i < size; i++)
		 B[arr[i] - min]++;

	for(i = min; i <= max; i++) 
		for(j = 0; j < B[i - min]; j++) 
			arr[index++] = i;
 
	print(arr,size);

	delete [] B;
}

int main()
{
	int a[] = {5,9,3,9,10,9,2,4,13,10};

	const size_t size = sizeof(a)/sizeof(a[0]);
	

	cout<< "The Array Before sorting" << endl;
	print(a,size);

	cout << "________________________________________\n" ;
	cout << "The Sorted Array is: " << endl;
	
	CountingSort(a, size);
}