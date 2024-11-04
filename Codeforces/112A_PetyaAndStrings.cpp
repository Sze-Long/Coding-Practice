#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string a, b;
    cin >> a >> b;
 
    char c[a.length() + 1]; 
	strcpy(c, a.c_str()); 
    char d[b.length() + 1]; 
	strcpy(d, b.c_str()); 
    for (int i = 0; i < a.length(); i++){
        if (tolower(c[i]) == tolower(d[i])){
            ;
        }
        else{
            if (tolower(c[i]) >= tolower(d[i])){
                cout << 1 << endl;
            }
            else if (tolower(c[i]) <= tolower(d[i])){
                cout << -1 << endl;
            }
            break;
        }
        if (i == a.length()-1){
            cout << 0 << endl;
        }
    }
    return 0;
}
 
