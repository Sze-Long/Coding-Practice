// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define pb push_back
 
/*
ll d,e; -- Make variables
cin >> d -- taking in values
cout << d -- 
vector<int> list -- Make vector
list.push_back(d) -- Add to list
list[0] -- First in list
SORT(list) -- Sorts vector
FOR(3){ -- Loop 3 time, i=: 0 1 2
num = (double)num/2.0 -- does division with decimal
fmod (3.3,1) -- division compare in if statement
cout << setprecision(10) << max -- moves decimal convert large number
t.length() -- for string   t.size() -- arrays
abs(-3) == 3 -- absolute value
**remember don't use a b c from above in code**
*/
 
bool is_square(ll x) {
    ll l = 1, r = 1e9;
    // l -------- mid --------- r
    while(l <= r) {
        ll mid = (r + l) / 2;
        if (mid * mid == x){
            return true;
        }
        if (mid * mid > x) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
        // 1, 2, 3, 4, 5, 6, 7 ...
        // Y  Y  Y  Y  N  N  N
    }      
    return false;
}
 
void solution(){
    ll n; cin >> n;
    ll s = 0;
    ll d;
    FOR(n){
        cin >> d;
        s += d;
    }
    if(is_square(s)){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t = 1;
    cin>>t;
 
    while(t--){
        solution();
    }
    
}
