// union or intersection of two  sorted array
// merge aalgorithm procedure  
// time complexity 0(m + n)

#include<bits/stdc++.h>
using namespace std;


void print_union(int arr1[],int arr2[],int m,int n){
    int i = 0;
    int j = 0;

    cout<<"union of the array1 and array2 is"<<endl;
    while (i < m && j < n)
    {
        if(arr1[i] < arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i] > arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    // print remaining element

    while (i < m)
    {
        cout<<arr1[i++]<<" ";
    }
    while (j < n)
    {
        cout<<arr2[j++]<<" ";
    }

    cout<<endl;
    
    
}


void print_intersection(int arr1[],int arr2[],int m,int n){
    int i = 0;
    int j = 0;
    cout<<"intersection of the array1 and array2 is"<<endl;
    while (i < m && j < n)
    {
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    cout<<endl;
}
int main(){
    int arr1[] = {1,2,4,5,6};
    int arr2[] = {2,3,5,7};
    
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    print_union(arr1,arr2,m,n);
    print_intersection(arr1,arr2,m,n);
    return 0;
}