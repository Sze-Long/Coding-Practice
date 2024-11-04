// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll a,b,c,d,e;
 
    cin >> a >> b >> c;
 
    d = a/c;
    e = b/c;
 
    if (a % c != 0){
        if (b % c != 0){
            cout << (d+1) * (e+1);
        }
        else{
            cout << (d+1) * e;
        }
    }
    else{
        if (b % c != 0){
            cout << (d) * (e+1);
        }
        else{
            cout << (d) * e;
        }    
    }
    
}
