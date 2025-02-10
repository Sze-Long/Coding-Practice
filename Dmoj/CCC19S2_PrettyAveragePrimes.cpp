//code by sze long
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

bool check(ll hold){
    ll sh = sqrt(hold);
    for(ll i = 2;i <= sh; i++){
        if(hold % i == 0){
            return false;
        }
    }
    return true;
}

pair<ll,ll> solution(ll hold){
    ll count = 0;
    while(true){
        if(check(hold-count) && check(hold+count)){
            return make_pair(hold-count,hold+count);
            break;
        }
        count++;
    }
}


int main(){

    ll t,hold;
    cin>>t;

    for(int i = 0; i < t; i++){
        cin >> hold;
        pair<ll,ll> num;
        num = solution(hold);

        cout << num.first << " " << num.second << "\n";

    }
}
