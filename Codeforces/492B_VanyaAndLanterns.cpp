// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
 
/*
ll d,e; -- Make variables
vector<int> list -- Make vector
list.push_back(d) -- Add to list
list[0] -- First in list
SORT(list) -- Sorts vector
FOR(3){ -- Loop 3 time, i=: 0 1 2
**remember don't use a b c from above in code**
*/
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t,d,e,f;
    double max;
    cin>> t >> d;
    max = 0;
    vector<int> list;
    FOR(t){
        cin >> e;
        list.push_back(e);
    }
    SORT(list);
 
    FOR(t-1){
        f = list[i+1] - list[i];
        if (f >= max){
            max = f;
        }
    }
    max = (double)max/2.0;
 
    if (list[0] > max){
        max = list[0];
    }
    if (d - list[t-1] > max){
        max = d - list[t-1];
    }
 
    
    cout << setprecision(10) << max;
}
