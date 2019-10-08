#include <iostream>
using namespace std;

// Insertion Sort Algorithm


int main()
{
	int n;
	cout << "\nEnter the length of your array : ";
	cin >> n;

	int Array[n];
	cout << "\nEnter any " << n << " Numbers for Unsorted Array : ";

	//Take The Input From The Ueser

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	//Loop For Sorting

	for (int i = 1; i < n; i++)
	{
		int temp = Array[i];
		int j = i - 1;
		while (j >= 0 && temp < Array[j])
		{
			Array[j + 1] = Array[j];
			j--;
		}
		Array[j + 1] = temp;
	}

	// The Output

	cout << " \n Sorted Array : ";

	for (int i = 0; i < n; i++)
	{
		cout << Array[i] << "\t" << endl;
	}
	return 0;

}