#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,i,res;
    cout << "Enter the number of which you want the table:";
    cin >> a;
    for(i=1 ; i<=100; i++){
        res=a*i;
        cout << a <<"*" << i <<"=" << res;
        cout << endl;
    }
    return 0;
}