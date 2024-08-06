#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, fact=1,n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(i=1 ; i <= n ; i++){
         fact=fact*i;
    }
    cout << "Factorial of "<< n << " is " << fact ;
    return 0; 
}