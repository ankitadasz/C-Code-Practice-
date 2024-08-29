#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,var=0,ld;
    cout << "Enter the no:";
    cin >> n;
    while(n!=0){
        ld=n%10;
        var=var*10+ld;
        n=n/10;
    }
    cout << "The reversed no is:" << var ;
    return 0;
}