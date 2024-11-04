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
list.push_back(d) -- Add to list
list.push_back(make_pair(1,2)) -- Add vector pair to list
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
    int m,n;
    string str1,str2;
    cin >> m >> n;
    cin >> str1 >> str2;
 
    vector<vector<int>> a(1, vector<int>(26, 0));
    for (char t : str1) {
        vector<int> temp = a.back();
        temp[static_cast<int>(t - 'a')] += 1;
        a.push_back(temp);
    }
 
    vector<vector<int>> b(1, vector<int>(26, 0));
        for (char t : str2) {
        vector<int> temp = b.back();
        temp[static_cast<int>(t - 'a')] += 1;
        b.push_back(temp);
    }
 
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        l -= 1;
        vector<int> a_letters(26), b_letters(26);
        for (int j = 0; j < 26; j++) {
            a_letters[j] = a[r][j] - a[l][j];
            b_letters[j] = b[r][j] - b[l][j];
        }
        int result = 0;
        for (int j = 0; j < 26; j++) {
            result += abs(a_letters[j] - b_letters[j]);
        }
        cout << result / 2 << endl;
    }
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
