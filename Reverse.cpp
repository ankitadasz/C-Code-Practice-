#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,rev=0,ld;
    cout << "Enter a number you want to reverse:" << endl ;
    cin >> n;
   while(n!=0){
        ld=n%10;
        rev= (rev*10) + ld;
        n=n/10;
    }
 cout << rev;
    return 0;
}