// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;

 
 
void solution(){
    string b;
    bool a;
    ll c, d;
    cin >> b;
    a = true;
    if (b[0] != '1'){
        a = false;
 
    }
    c = b.length() - 1;
    if ((b[c]) == '9'){
        a = false;
    }
    for (int i = 1; i < c; i++){
        if ((b[i]) == '0'){
            a = false;
        }
    }
 
    if (a==true){
        std::cout << "yes" << endl;
 
    }
    else{
        std::cout << "no" << endl;
    }
    
 
 
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin>>t;
 
    while(t--){
        solution();
    }
}