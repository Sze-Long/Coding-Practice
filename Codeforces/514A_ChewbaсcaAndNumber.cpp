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
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
 
    string t;
    cin>>t;
 
    for (size_t i = 0; i < t.length(); i++)
    {
        if(t[i] == '9'){
            if (i!=0){
                t[i] = '0';
            }
        }
        if(t[i] == '8'){
            t[i] = '1';
        }
        if(t[i] == '7'){
            t[i] = '2';
        }
        if(t[i] == '6'){
            t[i] = '3';
        }
        if(t[i] == '5'){
            t[i] = '4';
        }
    }
    cout << t;
}
