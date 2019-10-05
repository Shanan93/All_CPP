#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){


	std::vector<int> intArray;
	intArray.push_back(50);
	intArray.push_back(2991);
	intArray.push_back(23);
	intArray.push_back(505);
	intArray.push_back(7779);


	cout <<" The Elements of the vector are: "<< endl;

	// Walk the vector and read values using an iterator

	std::vector<int>::iterator arrIterator = intArray.begin();

	while(arrIterator != intArray.end()){

		cout<< *arrIterator<< endl;

		// Increment the iterator to access the next element
		++arrIterator;

	}

	// Find an element (say 7779) using the 'find' algorithm
	std::vector<int>::iterator elFound = find(intArray.begin(), intArray.end(),7779);

	// Check if value was found
	 if (elFound != intArray.end ())
		{
		 // Determine position of element using std::distance
		 int elPos = distance(intArray.begin (),elFound);
		 cout << "Value "<< *elFound;
		 cout << " found in the vector at position: " << elPos << endl;
		 }

		 return 0;
}
