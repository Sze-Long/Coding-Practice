// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(ll i = 0; i < a; i++)
#define For(a, b, c) for(ll i = a; i < b; i += c)
 
/*
ll d,e; -- Make variables
cin >> d -- taking in values
cout << d -- 
vector<ll> list -- Make vector
list.push_back(d) -- Add to list
list[0] -- First in list
SORT(list) -- Sorts vector
FOR(3){ -- Loop 3 time, i=: 0 1 2
num = (double)num/2.0 -- does division with decimal
cout << setprecision(10) << max -- moves decimal
**remember don't use a b c from above in code**
*/
 
void solution(){
    double d,e,f,num;
    ll g;
    cin >> d >> e;
    f=((double)e)/((double)d-1);
    g=((ll)e)%((ll)d-1);
 
    if (f == (ll)f){
        num = (ll)f * d - 1;
        cout <<setprecision(10)<< num << "\n";
    }
    else{
        num = (ll)f * (ll)d + g;
        cout<<setprecision(10)<<num<<"\n";
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
