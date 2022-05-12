// find minimum and maximum number in array

#include<iostream>
#include<climits>   // add library for INT_MAX,INT_MIN built in fuction

using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        max_no = max(arr[i],max_no);
        min_no = min(arr[i],min_no);
    
    }
    cout<<"maximum number : "<< max_no<<endl;
    cout<<"minimum number : "<< min_no<< endl;

    return 0;
    
}