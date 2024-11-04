// Code by Sze Long
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solution(){
 
    ll a, b, c, d,max, tot;
    cin>>a;
    b = a;
    c = a;
    max =1000000;
    tot =0;
    vector<ll> list;
    for (int i = 0; i < a; i++){
        cin >> d;
        list.push_back(d);
    }
 
    a = b;
    for (int e = 0; e < a; e++){
        tot = c;
        for (int i = 0; i < a; i++){
            if (list[e] == list[i]){
                tot -= 1;
            }
 
        }
        if (tot < max){
            max = tot;
        }
    }
    cout << max << endl;
    
    
 
 
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    ll t;
    cin>>t;
 
    while(t--){
        solution();
    }
}
