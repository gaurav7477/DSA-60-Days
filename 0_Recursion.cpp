#include<iostream>
using namespace std;

// 1.check the nth febonacci element using recursion
int fibonacci(int n){
    if(n == 0){ // base condition
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else{

        
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}

// 2.calculate the factorial of any number using recursion
int factorial(int n){
    if (n == 0) // base condition
    {
        return 1;
    }
    
    int pervfact = factorial(n-1);
    return n*pervfact;
}

// 3.claculate the value of n^p  using recursion
int power(int n,int p){
        if (p == 0){
            return 1; // base condition
        }

        int prevPower = power(n ,p-1);
        return n*prevPower;
    }

int main(){

    
    int n,p;
    cout<<"Enter the value of n "<<endl;

    cin>>n;

    cout<<"Enter the power of n "<<endl;

    cin>>p;

    int ans = power(n,p);

    cout<<n << " the power "<< p<< " is "<< ans<<endl;
    
    cout<< "factorial of "<< n << " is " << factorial(n)<<endl;

    cout<< n << "th element of the fibonacci series is "<< fibonacci(n)<<endl;

    return 0;
}