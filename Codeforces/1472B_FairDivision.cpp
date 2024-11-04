// Code by Sze Long
#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
#define SORT(a) sort(a.begin(), a.end())
#define FOR(a) for(int i = 0; i < a; i++)
#define For(a, b, c) for(int i = a; i < b; i += c)
#define pb push_back
 
void solution(){
  ll d,e,count,h; 
  vector<int> opp;
  vector<int>list2;
  map<int,int> f;
  count = 0;
  h=0;
  cin >> d;
  for(int j = 0; j < d; j++){
    cin >> e;
    if(e==1){
      h=1;
    }
    opp.pb(e);
    if(j==0){
      f[e] = 1;
    }
    else{
      f[count + e] = 1;
    }
    count += e;
  }
  if (((double)count/2.0) == (int)((double)count/2.0)){
    auto val = f.find(((double)count/2.0));
    if (h != 1){
      if ((double)count/4 == (int)count/4){
        cout << "YES" << "\n";
      }
      else{
        cout << "No" << "\n";
      }
    }
    else{
      cout << "YES" << "\n";
    }
 
  }
  else{
    cout << "No" << "\n";
  }
}
 
 
int main(){
  ll t = 1;
  cin>>t;
 
  for(int i = 0; i < t; i++){
      solution();
    }
}
