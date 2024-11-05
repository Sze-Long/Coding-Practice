// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define SUM(a) accumulate(a.begin(), a.end(), 0LL)
#define MAX(a) max_element(a.begin(), a.end())
// use *MAX(a) to get element
// use MAX(a) - a.begin() to get pointer
#define pb push_back

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t, temp;
    cin >> t;

    ll even = 0;
    ll odd = 0;

    for (int i = 0; i < t; i++){
        cin >> temp;
        if (temp % 2){
            odd++;
        } else {
            even++;
        }
    }
    
    cout << (even / 2) + (odd / 2) << endl;
}
