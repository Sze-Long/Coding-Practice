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
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    vector<ll> list(1e5,0),list2(1e5,0); 
    ll t,d,count,count2;
    count = 0;
    count2 = 0;
    cin>>t;
 
    FOR(t){
        cin >> d;
        list[d-1] += d;
    }
 
    list2[0] = list[0];
    list2[1] = list[1];
    list2[2] = max(list2[0]+list[2],list2[1]);
 
    for(int i = 3; i < list.size(); i++){
        if(list2[i-1] == list2[i-2]){
            list2[i] = list2[i-2] + list[i];
        }
        else{
            list2[i] = max(list2[i-2] + list[i],max(list2[i-3] + list[i],list[i-1]));
        }
        
    }
 
    cout << *max_element(list2.begin(),list2.end());
 
}
