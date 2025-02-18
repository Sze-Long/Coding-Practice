#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    vector<int> list;
    ll d,e;
    cin>>d >> e;


    for(int i = 1; i < d-e+1; i++){
        list.push_back(i+1);
    }
    list.push_back(1);
    for(int i = d-e+2; i < d+1; i++){
        list.push_back(i);
    }
    for(int i = 0; i < d; i++){
        cout<< list[i] << " ";
    }


}
