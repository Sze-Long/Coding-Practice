#include <bits/stdc++.h>
#define int long long
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
int d,e; -- Make variables
cin >> d -- taking in values
cout << d -- 
map<int,int> list -- Make map
if(map.find(num) != map.end()) -- checks if 
list[3] = 5 -- set 3 to be 5
list[3] -= 2 -- set 3 to be 2 less
vector<int> list -- Make vector
vector<pair<int,int>> list -- Make vector pair
vector<int> list(1e5,0)
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
int sum_to_x(int x){
    return (x * (x+1)) / 2;
}
void solution(){
    int l,r;
 
    cin >> r >> l;
    r += l-1;
    int sl = sum_to_x(l-1);
    int sr = sum_to_x(r);
    int center = (l+r)/2;
    int val1 = 0;
    int val2 = 0;
    int answer = NULL; 
 
    while ( l <= r ){
        center = (l + r) / 2;
        int val1 = (sum_to_x(center) - sl);
        int val2 = (sr - sum_to_x(center));
        if (val1 < val2){
            answer = center;
            l = center + 1;
        } else {
            r = center - 1;
        }
    }
 
    int sa = ((sum_to_x(answer))-sl) - (sr - (sum_to_x(answer)));
    int sa1 = ((sum_to_x(answer+1))-sl) - (sr - (sum_to_x(answer+1)));
 
 
    
    cout << min(abs(sa),abs(sa1)) << "\n";
}
 
 
signed main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
 
    int t;
    cin>>t;
 
    for(int i = 0; i < t; i++){
        solution();
    }
}
