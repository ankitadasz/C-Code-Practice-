#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout << "Enter the no you want to check for prime:";
    cin >> n;
     for(i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            cout << "The given no is not prime";
            break;
        }
        else{
            cout << "The given no is prime";
        }
     }
     return 0;
}