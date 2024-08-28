#include <bits/stdc++.h>
using namespace std;

int factorial(int n,int fact=1){
    int i;
        for(i=n; i>0; i--){
            fact=fact*i;
        }
    return fact;
}

int main(){
    int n,fact=1,result;
    cout << "Enter the value of n:";
    cin >> n;
    result=factorial(n,fact);
    cout<< "Factorial of the given no is:"<<result;
    
}