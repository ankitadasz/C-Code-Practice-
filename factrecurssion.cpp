#include <bits/stdc++.h>
using namespace std;
int factorial(int n, int fact=1){
    int i;
    for(i=1 ; i <= n ; i++){
         fact=fact*i;
    }
    return fact;
}
int main(){
    int i, fact=1,n,result;
    cout << "Enter the value of n:";
    cin >> n;
    result=factorial(n,fact);
    cout << "Result is:" << result ;
}