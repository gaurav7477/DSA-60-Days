// linear search  for searching element -> BigO(n)  traverse from starting point
// Binary search  for searching element -> BigO(nlogn)  searching start from middle point

#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key){

    int start_point = 0;
    int end_point = n;

    int middle_element = (start_point + end_point)/2;

    while(start_point < end_point)
    {
        if (arr[middle_element] == key)
        {
            return middle_element;
        }
        else if (arr[middle_element] > key)
        {
            end_point = middle_element - 1;
        }
        else
        {
            start_point = middle_element + 1;
        }
       
        
    }
     return -1;
    
}

// int linear_search(int arr[], int n, int key)
// {
	
// 	for (int i = 0; i < n; i++)
// 		if (arr[i] == key)
// 			return i;
// 	return -1;
// }

// Driver code
int main()
{
	int n;
    cout<<"enter the size of array";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key of array";
    cin>> key;

    

	// Function call
	// int result = linear_search(arr, n, key);
    int result = binary_search(arr, n, key);
    
    (result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}









