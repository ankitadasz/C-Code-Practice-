#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, res = 0;
    char operation;
    cout << "Enter the value of a and b :";
    cout << endl;
    cin >> a >> b;
    cout << "Enter the operation you want to do" << endl;
    cin >> operation;


    switch (operation){

        case '+':{

            res=a+b;
             cout << "The result is:";
            cout << res;
            break;
        }
        case '-':{
            res=a-b;
             cout << "The result is:";
            cout << res;
            break;
        }
        case '*':{
            res=a*b;
             cout << "The result is:";
            cout << res;
            break;
        }
        case '/':{
            res=a/b;
             cout << "The result is:";
            cout << res;
            break;
        }
        default:{
            cout << "Put a valid operator!!!!!!";
            break;
        }
    }
    return 0;
    
}