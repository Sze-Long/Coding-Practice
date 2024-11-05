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
cout << fixed << max -- not be 1e3 but 10
cout << setprecision(10) << max -- moves decimal convert large number
t.length() -- for string   t.size() -- arrays
abs(-3) == 3 -- absolute value
**remember don't use a b c from above in code**
*/

void solution(){



}


int main(){
    cin.tie(0);
    cout.tie(0);

    ll t = 1,d,e,count;
    int val;
    string f;
    cin>>t>>d>>e;
    string list,list2;
    for(int i = 0; i<t; i++){
        cin >> f;
        list =f;
        list2 = list;
        for (int k = 0; k < d; k++){
            count = 0;
            if(list[k] != '.'){
                if(list[k]=='A'){
                    val = k+e ;
                    if(k+e> d-1) val=d-1;
                    if(*find(list.begin() + k,list.begin() + val,'B') == 'B'){
                        count = 1;
                    }
                }
                else{
                    val = k-e;
                    if(k-e < 0) val=0;
                    if(*find(list.begin() + val,list.begin() + k,'A') == 'A'){
                        count = 1;
                    }
                }
                if(count ==1){
                    list2[k] = 'N';
                }
                if(count ==0){
                    list2[k]=   'Y';
                }
            }
            cout << list2[k];
        }
        cout <<"\n";
    }
}
