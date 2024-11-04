//  Created by zFa3 + ZZ-(Sze Long)
//  Written in C++
 
// all the include statements that bits/stdc++.h uses
#include <bits/stdc++.h>
 
using namespace std;
 
void solution(){
    int d, e, f;
    cin >> d >> e >> f;
    vector<int> teachers(e);
    for(int j = 0; j < e; j++){
        cin >> teachers[j];
    }
    sort(teachers.begin(), teachers.end());
    int student_location;
    for(int j = 0; j < f; j++){
        cin >> student_location;
        if (student_location < teachers[0]){
            cout << teachers[0] - 1 << "\n";
        } else if(student_location > teachers[teachers.size()-1]){
            cout << d - teachers[teachers.size() - 1] << "\n";
        } else {
            int p1 = 0;
            int p2 = e - 1;
            while (p1 <= p2){
                int center = (p1 + p2) / 2;
                if (teachers[center] > student_location and teachers[center - 1] < student_location){
                    cout << (teachers[center] - teachers[center - 1]) / 2 << "\n";
                    break;
                } else if (teachers[center] < student_location) {
                    p1 = center + 1;
                } else {
                    p2 = center - 1;
                }
            }
        }
    }
}
 
 
int main(){
    int t;
    cin >> t;
 
    for(int i = 0; i < t; i++){
        solution();
    }
}
