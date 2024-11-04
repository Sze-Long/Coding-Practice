#include <iostream>
 
using namespace std;
#define pass (void)0
 
int main() {
    int n;
    cin >> n;
    if (n % 2 == 0 && n > 2){
        cout << ("YES") << endl;
    }
    else{
        cout << ("NO") << endl; 
    }
    return 0;
}
