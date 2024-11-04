#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
void solution(){
    vector<ll> list;
    vector<ll> temp;
    
    ll a, b, c, hold, a1, small, num, test;
    cin >> a;
    hold = a;
    list.clear();
    while(a--){
        cin >> c;
        list.push_back(c);
    }
    test = 1;
    a = hold;
    for(int i = 0; i<a-2;i++){
        while(list[i] != 0){
            list[i] -= 1;
            list[i+1] -= 2;
            list[i+2] -= 1;
        }
        if (list[i+1] < 0 or list[i+2] < 0){
            test = 0;
            break;
        }
        if (i == a-3){
            if (list[i+1] != 0 or list[i+2] != 0){
                test = 0;
                break;
            }
        }
    }
 
 
    if(test == 1){
        cout <<"yes" << endl;
    }
    else{
        cout<< "no" << endl;
    }
}
 
 
 
int main(){
 
    ll t;
    cin>>t;
 
    while(t--){
        solution();
    }
}
