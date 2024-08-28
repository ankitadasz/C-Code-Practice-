#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,fact=1,i;
    cout << "enter the no of which you want to calculate the factorial:";
    cin >> n;
    if(n==0){
        cout << "Factorial is 0";
    }
    else if(n==1){
        cout << "Factorial is 1";
    }
    else{
        for(i=n; i>0 ; i--){
            fact=fact*i;   
             }
             cout <<"factorial is:" << fact ;    
    }
   return 0;
}