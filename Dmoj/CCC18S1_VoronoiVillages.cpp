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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t = 1,a;
    double temp,max;
    cin>>t;
    max = 1e10;
    vector<int> list;
    for(int i = 0; i < t; i++){
        cin>>a;
        list.push_back(a);
    }
    sort(list.begin(),list.end());

    for (int i = 1; i < t-1; i++)
    {   
        temp = (double)(list[i+1] - list[i-1])/2.0;
        if(temp < max){
            max = temp;
        }
    }
    cout << fixed << setprecision(1) << max ;

}
