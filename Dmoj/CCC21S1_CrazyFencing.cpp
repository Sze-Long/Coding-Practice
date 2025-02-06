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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t,hold;
    double area = 0;
    cin>>t;
    vector<int> height,width;
    for(int i = 0; i < t+1; i++){
        cin >> hold;
        height.push_back(hold);
    }
    for(int i = 0; i < t; i++){
        cin >> hold;
        area += hold * (double)(height[i] + height[i+1])/2.0;
    }

    cout << fixed << area; 
}
