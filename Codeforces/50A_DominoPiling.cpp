#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a, b;
    int c, d;
    
    cin >> a >> b;
 
    c = a * b;
    if (c % 2 == 1){
        c -= 1;
    }
    d = c/2;
    cout << d << endl;
    return 0;
}
 
