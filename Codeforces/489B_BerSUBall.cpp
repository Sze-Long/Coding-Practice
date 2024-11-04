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
fmod (3.3,1) -- division compare in if statement
cout << setprecision(10) << max -- moves decimal convert large number
t.length() -- for string   t.size() -- arrays
**remember don't use a b c from above in code**
*/
 
void solution(){
 
 
 
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll d,t;
    cin>>d;
    vector<int> list ,listb;
 
    for(int i = 0; i < d; i++){
        cin>>t;
        list.push_back(t);
 
    }
    ll e,count;
    cin>>e;
 
    for(int i = 0; i < e; i++){
        cin>>t;
        listb.push_back(t);
    }
 
    SORT(list);
    SORT(listb);
 
    count = 0;
    FOR(d){
        for(int j = 0; j < e; j++){
            if(abs(list[i] - listb[j]) <= 1){
                listb[j] = 9876;
                count++;
                break;
            }
        }
    }
    cout << count;
}
