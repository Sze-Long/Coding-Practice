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
map<int,int> list -- Make map
if(map.find(num) != map.end()) -- checks if 
list[3] = 5 -- set 3 to be 5
list[3] -= 2 -- set 3 to be 2 less
vector<int> list -- Make vector
list.push_back(d) -- Add to list
list[0] -- First in list
SORT(list) -- Sorts vector
FOR(3){ -- Loop 3 time, i=: 0 1 2
num = (double)num/2.0 -- does division with decimal
fmod (3.3,1) -- division compare in if statement
cout << fixed << max -- not be 1e3 but 10
cout << setprecision(10) << max -- moves decimal convert large number
t.length() -- for string   t.size() -- arrays
abs(-3) == 3 -- absolute value
find(a.begin,a.end,num) -- find where in list
**remember don't use a b c from above in code**
*/
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    double t;
    ll d;
    cin>>t;
 
    d = ceil(t/5);
 
    cout << d;
}
