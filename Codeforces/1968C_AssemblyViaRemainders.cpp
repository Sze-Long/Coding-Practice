#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
void solution(){
 
    ll a;
    ll b;
    cin >> a >> b;
    ll c;
    c = 100000;
    cout << c << endl;
    c += b;
    cout << c << endl;
    a -= 2;
    ll d;
    while(a){
        cin >> d;
        c += d;
        cout << c << endl;
        a--;
    }
 
}
 
 
int main(){
 
    ll t;
    cin>>t;
 
    while(t--){
        solution();
    }
}
