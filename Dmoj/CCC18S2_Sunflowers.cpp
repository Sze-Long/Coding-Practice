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
#define mp make_pair
#define f first
#define s second
#define vc vector

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
queue<char> q;
queue<pair<int,int>> list;
q.push('A');
unordered_map<int, int> umap;
if(umap.find(key) == umap.end()){ -- find if it is not in map
umap[x] = y; -- insert values
char grid[25][25] = {};
q.front() -- looks at first element in queue
q.pop(); -- remove first item from queue
cout << fixed << area; -- fixes number makes e not show up (really big numbers)
**remember don't use a b c from above in code**
*/

void solution(){



}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    ll d,e;

    vector<vector<int>> list(t, vector<int>(t)),list2(t, vector<int>(t));

    for(int i = 0; i < t; i++){
        for(int j = 0; j < t; j++){
            cin >> list[i][j];
        }
    }

    if(list[0][0] < list[0][1]){
        d = 0;
    }
    else{
        d = 1;
    }

    if(list[0][0] < list[1][0]){
        e = 0;
    }
    else{
        e = 1;
    }

    if(d == 0 && e == 0){
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                cout << list[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if(d == 1 && e == 1){
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                list2[i][j] = list[t-1-i][t-1-j];
            }
        }
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                cout << list2[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if(d == 0 && e == 1){
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                list2[i][j] = list[t-1-j][i];
            }
        }
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                cout << list2[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else if(d == 1 && e == 0){
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                list2[i][j] = list[j][t-i-1];
            }
        }
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                cout << list2[i][j] << " ";
            }
            cout << "\n";
        }
    }


}
