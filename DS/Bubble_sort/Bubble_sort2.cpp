#include <iostream>

using namespace std;

void BubbleSort(int *a, int size)
{
	int k,temp;

	for(int i = 0; i < size-1; i++) {

		for(int j=0; j < size -1; j++) {

			if(*(a+j) > *(a+j+1)) {
				temp = *(a+j+1);
				*(a+j+1) = *(a+j);
				*(a+j) = temp;
			}
		}
		for(k = 0; k < size; k++) 
		  cout << *(a+k) <<" ";
	    cout << endl;
	}
	
	int dummy = 1;
}


int main()
{
	int k;
	int a[] = {53,71,12,39,4,92,21,65,88,20};

	const size_t sz = sizeof(a)/sizeof(a[0]);

	for(k = 0; k < sz; k++) 
		cout << *(a+k) <<" ";

	cout << endl;
	cout << "_____________________________________" << endl;
	BubbleSort(a,sz);
}