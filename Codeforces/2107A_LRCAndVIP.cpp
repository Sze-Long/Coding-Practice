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

void solution(){
    ll d,e,max = 0,hold,test =true;
    vector<int> list;
    cin >> d;

    for(int i = 0; i < d; i++){
        cin >> e;
        if(e > max){
            max = e;
            hold = i;
        }
        list.push_back(e);
    }

    for(int i = 0; i < d; i++){
        if(list[i] != max){
            test = false;
        }
    }

    if(test == true){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
        for(int i = 0; i < d; i++){
            if(list[i] == max){
                cout << "2 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }


}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;

    for(int i = 0; i < t; i++){
        solution();
    }
}
