#include <iostream>

using namespace std;

void print(int a[], int size)
{
  for (int i = 0; i < size; i++) 
    cout << a[i] << " ";
  cout << endl;
}
 
void merge(int a[], const int low, const int mid, const int high)
{
  int *temp = new int[high-low+1];
        
  int left = low;
  int right = mid+1;
  int current = 0;

  // Merges the two arrays into temp[] 
  
  while(left <= mid && right <= high) {
    if(a[left] <= a[right]) {
      temp[current] = a[left];
      left++;
    }
    else { // if right element is smaller that the left
      temp[current] = a[right];  
      right++;
    }
    current++;
  }

  // Completes the array 

         /** Extreme example a = 1, 2, 3 || 4, 5, 6
             The temp array has already been filled with 1, 2, 3, 
             So, the right side of array a will be used to fill temp. **/
  if(left > mid)
   { 
      for(int i=right; i <= high;i++) {
        temp[current] = a[i];
        current++;
    }
  }
        /** Extreme example a = 6, 5, 4 || 3, 2, 1
            The temp array has already been filled with 1, 2, 3
            So, the left side of array a will be used to fill temp. **/

  else {  
    for(int i=left; i <= mid; i++) {
      temp[current] = a[i];
      current++;
    }
  }

  // into the original array
  
  for(int i=0; i<=high-low;i++)
  {
                a[i+low] = temp[i];
  }
  delete[] temp;
}
 
void merge_sort(int a[], const int low, const int high)
{
  if(low >= high) 
    return;

  int mid = (low+high)/2;
  
  merge_sort(a, low, mid);  //left half
  merge_sort(a, mid+1, high);  //right half
  merge(a, low, mid, high);  //merge them
}
 
int main()
{        
  int a[] = {38, 27, 43, 3, 9, 82, 10};
  int arraySize = sizeof(a)/sizeof(int);

  print(a, arraySize);

  merge_sort(a, 0, (arraySize-1) );   

  print(a, arraySize);  
  return 0;


}