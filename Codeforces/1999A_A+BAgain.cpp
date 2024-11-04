// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) max_element(a.begin(), a.end())
#define pb push_back
 
void solution(){
    ll d,count;
    cin >> d;
 
    count = d%10;
    cout << d/10 + count << "\n";
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t;
    cin>>t;
 
    for(int i = 0; i < t; i++){
        solution();
    }
}
