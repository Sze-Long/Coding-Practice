#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string a;
    int b = 0,c = 0,d = 0;
    cin >> a;
 
    for (int i = 0; i < a.length(); i++){
        if (a[i] == '1'){
            b++;
        }
        if (a[i] == '2'){
            c++;
        }
        if (a[i] == '3'){
            d++;
        }
    }
    
    for (int i = 0; i < b; i++){
        
        if (b-1 == i and c == 0 and d == 0){
            cout <<"1";
        }
        else{
            cout << "1+";
        }
    }
    for (int i = 0; i < c; i++){
        
        if (c-1 == i and d == 0){
            cout <<"2";
        }
        else{
            cout << "2+";
        }
    }
    for (int i = 0; i < d; i++){
        
        if (d-1 == i){
            cout <<"3";
        }
        else{
            cout << "3+";
        }
    }
    return 0;
}
