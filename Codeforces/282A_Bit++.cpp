#include <iostream> 
#include <string>
 
using namespace std;
 
int main() {
    int n;
    string a;
    int counter;
    counter = 0;
    cin >> n;
    while (n--) {
        cin >> a;
        if (a[1] == '+'){
            counter += 1;
        }
        if (a[1] == '-'){
            counter -= 1;
        }
    }
        
    std::cout << counter;
    return 0;
 
}
