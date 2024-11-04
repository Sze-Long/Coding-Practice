#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
 
 
void solution(){
    vector<int> list;
    vector<int> temp;
    
    ll a, b, c, hold, a1, small, num, test;
    cin >> a >> b >> c;
    a1 = a;
    a = a*a;
    ll d[a-1];
    hold = a;
    while(a--){
        cin >> d[a];
        list.push_back(d[a]);
 
    }
    sort(list.begin(), list.end());
 
    small = list[0];
    for(int i = 0; i<a1; i++){
        for(int g = 0; g<a1; g++){
            num = small + (i*b) + (g*c);
            temp.push_back(num);
        }
    }
    sort(temp.begin(),temp.end());
    a = hold;
    test = 1;
    while(a--){
        if (temp[a] != list[a]){
            test = 0;
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
