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
 
void solution(){
    ll d, maximum = 0;
    cin >> d;
    vector<int> p(3), q(3);
    if (d == 2){
        cin >> p[1] >> p[2];
        cout << min(p[1], p[2]) << "\n";
    } else {
        cin >> p[0] >> p[1] >> p[2];
 
        // 1 2 3 4 5
        // a b c d e
        // 0 1 2
        // b c 
        FOR(d - 3){
 
            q = p;
            sort(q.begin(), q.end());
 
            // maximum = max({1, 2, 3, 4, 5})
            maximum = max(maximum, (ll)q[1]);
            p[0] = p[1];
            p[1] = p[2];
            cin >> p[2];
        }
        
         
        sort(p.begin(), p.end());
        cout << max(maximum, (ll)p[1]) << "\n";
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    ll t = 1;
    cin>>t;
 
    while(t--){
        solution();
    }
}
