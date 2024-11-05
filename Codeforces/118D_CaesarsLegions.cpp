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
#define all(a) a.begin(), a.end()
#pragma GCC optimize("O3")
 
// use *MAX(a) to get element
// use MAX(a) - a.begin() to get pointer
 
/*
ll d,e; -- Make variables
cin >> d -- taking in values
cout << d -- 
map<int,int> list -- Make map
if(map.find(num) != map.end()) -- If the value is in the map
if(map.find(num) == map.end()) -- If the value is not in map
list[3] = 5 -- set 3 to be 5
list[3] -= 2 -- set 3 to be 2 less
vector<int> list -- Make vector
vector<pair<int,int>> list -- Make vector pair
vector<ll> list(1e5,0)
list.push_back(d) -- Add to list
list.push_back(make_pair(1,2)) -- Add vector pair to list
list.back() -- last element in the vector
list[0] -- First in list
SORT(list) -- Sorts vector
FOR(3){ -- Loop 3 time, i=: 0 1 2
num = (double)num/2.0 -- does division with decimal
fmod (3.3,1) -- division compare in if statement
cout << fixed << max -- not be 1e3 but 10
cout << setprecision(10) << max -- moves decimal convert large number
t.length() -- for string   t.size() -- arrays
abs(-3) == 3 -- absolute value
find(a.begin(),a.end(),num) -- find where in list
string substr (size_t pos, size_t len) const;
*max_element(list2.begin(),list2.end())
.first or .second to access first element in pair
list.first == 4
**remember don't use a b c from above in code**
*/
 
ll n1,n2;
map<pair<pair<ll,ll>,pair<ll,ll>>,ll> mp;
 
ll dp(ll p1,ll p2,ll prev,ll count){
    ll total;
    total = 0;
    if(p1 == 0 and p2 == 0){
        return 1;
    }
    if(mp.find(make_pair(make_pair(p1,p2),make_pair(prev,count))) != mp.end()){
        return mp[make_pair(make_pair(p1,p2),make_pair(prev,count))];
    }
    else if(prev == 1 and count == n1){
        if(p2 != 0){
            total += dp(p1,p2-1,2,1);
        }
        else{
            return 0;
        }
    }
    else if(prev == 2 and count == n2){
        if(p1 != 0){
            total += dp(p1-1,p2,1,1);
        }
        else{
            return 0;
        }
    }
    else{
        if(p1 != 0){
            if(prev == 1){
                total += dp(p1-1,p2,1,count+1);
            }
            else{
                total += dp(p1-1,p2,1,1);
            }
        }
        if(p2 != 0){
            if(prev == 2){
                total += dp(p1,p2-1,2,count+1);
            }
            else{
                total += dp(p1,p2-1,2,1);
            }
        }
    }
    total %= (int)1e8;
    mp[make_pair(make_pair(p1,p2),make_pair(prev,count))] = total;
    return total;
}
 
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll p1,p2,total;
    cin>>p1>>p2>>n1>>n2;
 
    total = dp(p1,p2,0,0);
    cout << total;
}
 
