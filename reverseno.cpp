#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rev=0,ld,n;
    cout << "enter a no:";
    cin >> n;
    while (n!=0)
    {
      ld=n%10;
      rev=rev*10 + ld;
      n=n/10;
    }
    cout << "reverse of the given no is:";
    cout << rev;
    return 0;
}