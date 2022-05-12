#include<iostream>
using namespace std;

/*

// 1.check the array element is sorted or not using recursion

bool sorted(int arr[],int n){
    if (n == 1)
    {
        return 1;// base condition
    }
    int restArray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
    
}
int main(){


    int arr[] = {1,1,3,4,5};    

    cout<<sorted(arr,5)<<endl;

    return 0;
}
*/




/*
// 2.print number  till n decresing order and increasing order 

void inc(int n){
    if (n == 1)
    {   cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
    
}
void dec(int n){
    if (n == 0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);
    
}

int main(){
    int n;
    cin>>n;
    dec(n);
    inc(n);
    return 0;
}

*/


/*

 // 3.find the first and last accurence of a number in an array

 int first_occurence(int arr[],int n,int i,int key ){

     if (i == n)
     {
         return -1;
     }
     
     if (key == arr[i])
     {
         return i;
     }

     return first_occurence(arr,n,i+1,key);
     
 }

 int last_accurence(int arr[],int n,int i,int key ){
    if (i == n)
     {
         return -1;
     }
     int restarray = last_accurence(arr,n,i+1,key);
     if(restarray != -1){
         return restarray;
     }
     if (arr[i] == key)
     {
         return i;
     }
     return -1;
     
 }

 int main(){
     int arr[] = {2,3,1,2,5,2,7};
     cout<<first_occurence(arr,7,0,2)<<endl;
     cout<<last_accurence(arr,7,0,2)<<endl;

     return 0;
 }
*/





/*
// 4.reverse a string using recursion

void reverse(string s){
    if (s.length() == 0)
    {
        return;
    }

    string ros = s.substr(1);
    reverse(ros);

    cout<<s[0];
    
}

int main(){
    string s;
    cin>>s;
    reverse(s);
    return 0;
}
*/



// 5.pi replace by 3.14 using recursion

void replace_pi(string s){
    if (s.length() == 0)// base condition
    {
        return;
    }

    if (s[0] == 'p' && s[1] == 'i')
    {
        cout<<"3.14";
        replace_pi(s.substr(2));
    }
    else{
        cout<<s[0];
        replace_pi(s.substr(1));
    }
    
}

int main(){
    string s;
    cin>>s;
    replace_pi(s);
    return 0;
}