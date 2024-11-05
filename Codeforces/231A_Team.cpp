#include <iostream> 
#include <string>
 
using namespace std;
 
int main() {
    int n;
    int counter;
    cin >> n;
    counter = 0;
    while (n--) {
        int a;
        int b;
        int c;
        cin >> a >> b >> c;
        if (a + b + c >= 2){
            counter += 1;
            }
 
        }
    
    cout << counter << endl;
    return 0;

}
