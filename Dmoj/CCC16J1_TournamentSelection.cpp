// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for (int i = 0; i < a; i++)
#define For(a, b, c) for (int i = a; i < b; i += c)

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string t;
    ll count;
    vector<string> list;
    count = 0;
    FOR(6) {
        cin >> t;
        if(t == "W"){
            count += 1;
        }
    }
    
    if(count > 4){
        cout << 1;
    }
    else if (count > 2){
        cout << 2;
    }
    else if (count > 0){
        cout << 3;
    }
    else{
        cout << -1;
    }
    

    
}
