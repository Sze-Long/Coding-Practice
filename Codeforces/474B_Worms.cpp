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
 
vector<int> arr;
vector<int> prefix_sum = {0};
 
ll find_bucket(int n){
    // binary search
    ll p1 = 0;
    ll p2 = prefix_sum.size() - 1;
    while (p1 <= p2){
        ll center = (p1 + p2) / 2;
        // 3 7 8 4 2 5
        if (n <= prefix_sum[center + 1] and n > prefix_sum[center]){ return center; }
        if (n > prefix_sum[center]){
            p1 = center + 1;
        } else {
            p2 = center - 1;
        }
        // cout << p1 << ' ' << p2 << '\n';
    }
    // this should never happen
    return -1;
}
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll count, count2, temp;
    ll query;
    cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    ll total = 0;
    for (size_t i = 0; i < count; i++)
    {
        total += arr[i];
        prefix_sum.push_back(total);
    }
    /*
    for (auto i : prefix_sum){
        cout << i << ' ';
    }
    cout << endl;
    */
    cin >> count2;
    for (size_t i = 0; i < count2; i++)
    {
        cin >> query;
        cout << find_bucket(query) + 1 << "\n";
    }
    // binary search
}
