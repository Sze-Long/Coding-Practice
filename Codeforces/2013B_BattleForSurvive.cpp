// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
#define float double
 
using namespace std;
#define all(x) x.begin(), x.end()
 
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define pb push_back
 
void solution(){
    ll d,e,f,count;
 
    cin >> d;
    count = 0;
    FOR(d-2){
        cin >> e;
        count += e;
    }
 
    cin >> e;
    cin >> f;
 
    cout << f + count - e << "\n";
}
 
int main(){
    ll t = 1;
    cin>>t;
 
    for(int i = 0; i < t; i++){
        solution();
    }
}
