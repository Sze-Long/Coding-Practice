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

map<pair<ll,ll>,char> square,searched;
char grid[25][25] = {};
queue<pair<int,int>> list;
ll w,l;

ll bfs(ll x,ll y,ll count){
    
    count += 1;
    grid[x][y] = 'I';


    if(grid[x][y-1] == '.' && y-1 >= 0){
        count += bfs(x,y-1,0);
    }
    if(grid[x][y+1] == '.' && y+1 <= l){
        count += bfs(x,y+1,0);
    }
    if(grid[x-1][y] == '.' && x-1 >= 0){
        count += bfs(x-1,y,0);
    }
    if(grid[x+1][y] == '.' && x+1 <= w){
        count += bfs(x+1,y,0);
    }

    return count;

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll> list;
    ll t,count,room = 0;
    char hold;
    cin >> t >> l >> w;

    for(int i = 0; i < l; i++){
        for(int j = 0; j < w; j++){
            cin >> hold;
            grid[j][i] = hold;
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < w; j++){
            if(grid[j][i] == '.'){
                count = 0;
                count = bfs(j,i,0);
                list.push_back(count);
            }
        }
    }
    SORT(list);
    for(int z = list.size()-1; z >= 0; z--){
        if(t-list[z] >=0){
            room++;
            t -= list[z];
        }
        else{
            break;
        }
    }
    if(room == 1)
        cout << room << " room, " << t << " square metre(s) left over";
    else
        cout << room << " rooms, " << t << " square metre(s) left over";

}
