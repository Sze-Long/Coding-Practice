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
find(a.begin,a.end,num) -- find where in list
string substr (size_t pos, size_t len) const;
*max_element(list2.begin(),list2.end())
**remember don't use a b c from above in code**
*/
 
void solution(){
    int d,e,f;
    cin >> d >> e >> f;
 
    map<int,int> value1,value2;
    
    int d1,d2,tally,max,min,t1,t2;
    tally = 0;
    FOR(f){
        cin >> d1 >> d2;
        if(value1.find(d1) == value1.end()){
            value1[d1] = 1;
        }
        else{
            value1[d1]++;
        }
        if(value2.find(d2) == value2.end()){
            value2[d2] = 1;
        }
        else{
            value2[d2]++;
        }
    }
    
 
    for(int i =1; i <= e;i++){
        tally += value1[i];
    }
    max = tally;
    min = tally;
    t1 = 1;
    t2 = 1;
    for(int g = 2; g <= d - e + 1; g++){
        tally -= value2[g-1];
        tally += value1[g+e-1];
 
        if(max < tally){
            max = tally;
            t1 = g;
        }
        else if(min > tally){
            min = tally;
            t2 = g;
        }
 
    }
 
    cout << t1 << " " << t2 << "\n";
    
 
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
