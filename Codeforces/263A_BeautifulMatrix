#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a, b;
    int counter;
    for (int i = 0; i < 25; i++) {
        cin >> a;
        if (a == 1){
            b = i;
        }
    }
    counter = 0;
    if (b < 5){
        counter += 2;
    }
    else if (b < 10){
        counter += 1;
    }
    else if (b >= 20){
        counter += 2;
    }
    else if(b >= 15){
        counter += 1;
    }
 
    if (b%5 == 4){
        counter +=2;
    }
    else if (b%5 == 3){
        counter +=1;
    }
    else if (b%5 == 1){
        counter +=1;
    }
    else if (b%5 == 0){
        counter +=2;
    }
 
 
    cout << counter << endl;
    return 0;
}
