#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j, count;

    for (i = 2; i <= 100; i++) {
        count = 0;  
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                count++;  
                break;    
            }
        }
        if (count == 0) {  
            cout << i << " ";
        }
    }
    
    return 0;
}