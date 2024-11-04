// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
 
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
cout << setprecision(10) << max -- moves decimal
**remember don't use a b c from above in code**
*/
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t,e,num,g;
    double d,f,val;
    cin >>t>>d>>e>>f;
 
    val = (double)f/(double)d;
 
    if(val <= e){
        num = t/(int)d;
        g=t%(int)d;
        if (g*e <= f){
            cout<<num*(int)f +g*e;
        }
        else{
            cout<<num*(int)f +f;
        }
    }
    else{
        num = t*e;
        cout<<num;
    }
 
}
