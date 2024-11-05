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

    ll d, tot,g;
    g = 0;
    vector<int> list;
    FOR(16) {
        cin >> d;
        list.push_back(d);
        
    }
    
    tot = list[0] + list[1] + list[2] + list[3];
    FOR(4) {
        if(tot != list[i * 4] + list[1+i*4] + list[2+i*4] + list[3+i*4]){
            g = 1;
        }
    }
    FOR(4) {
        if(tot != list[i] + list[i+4] + list[i+8] + list[i+12]){
            g = 1;
        }
    }

    if(g == 1){
        cout << "not magic" << "\n";
    }
    else {
        cout << "magic" << "\n";
    }

}
