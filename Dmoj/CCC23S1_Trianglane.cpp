//code by szelong
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
    vector<int> list,list2;

    ll t,hold,count=0,temp;
    cin>>t;
    temp = 0;
    for(int i = 0; i < t; i++){
        cin >> hold;
        if(hold == 1){
            if(temp == 0){
                count += 3;
            }
            else{
                count += 1;
            }
            temp = 1;
        }
        else{
            temp = 0;
        }
        list.push_back(hold);
    }

    temp = 0;
    for(int i = 0; i < t; i++){
        cin >> hold;
        if(hold == 1){
            if(temp == 0){
                count += 3;
            }
            else{
                count += 1;
            }
            if(i % 2 == 0 && list[i] == 1){
                count -= 2;
            }
            temp = 1;
        }
        else{
            temp = 0;
        }
        list2.push_back(hold);
    }

    cout << count;


}
