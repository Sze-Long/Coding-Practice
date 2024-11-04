// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t, a;
    cin>>t;
    a = (-t-1)/2;
    if (t % 2 == 0){
        cout << t/2;
    }
    else{
        cout << a;
    }
}
