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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char one;
    ll l,w,t,two,count=0,count2=0,total=0;
    cin>> l >> w >> t;
    vector<int> length(l),width(w);
    for(int i = 0; i < t; i++){
        cin >> one >> two;
        if(one == 'R'){
            length[two-1] = abs(length[two-1] - 1);
        }
        else{
            width[two-1] = abs(width[two-1] - 1);
        }
    }

    for(int i = 0; i < w; i++){
        count2 += width[i];
    }

    for(int i = 0; i < l; i++){
        total += abs((length[i]*w)-count2);
    }

    cout << total << "\n";
}
