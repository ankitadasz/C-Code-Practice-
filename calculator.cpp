#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    char option;
    cout << "Enter the value of a and b:";
    cout << endl;
    cin >> a >> b;
    cout << "Chose your option:(+,-,*,/):";
    cin >> option;
    switch(option) 
    {
        case '+':{
            cout <<"The answer is:" << a+b;
            break;
        }
         case '-':{
            cout <<"The answer is:" << a-b;
            break;
        }
         case '*':{
            cout <<"The answer is:" << a*b;
            break;
        }
         case '/':{
            cout <<"The answer is:" << a/b;
            break;
        }

    }
    return 0;
}