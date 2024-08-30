#include <bits/stdc++.h>
using namespace std;
int main(){
    string name="HELLOWORLD!",rev="";
    int leng=name.length();
    int i;
    for(i=leng-1;i>=0;i--){
        rev=rev+name[i];
    }
    cout << "The reversed string is:" << rev;
    return 0;
}