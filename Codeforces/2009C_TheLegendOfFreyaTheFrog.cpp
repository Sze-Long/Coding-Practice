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
// use *MAX(a) to get element
// use MAX(a) - a.begin() to get pointer
 
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
 
void solution(){
    ll d , e, f;
    cin >> d;
    cin >> e;
    cin >> f;
    cout << setprecision(10) << max((ceil((double)d/f) * 2) - 1 , ceil((double)e/f) * 2) << "\n";
 
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
