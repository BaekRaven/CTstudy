#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    double max;
    double grade[n];
    for(int i=0; i<n; i++){
        cin >> grade[i];
        if(max < grade[i])
            max = grade[i];
    }
    long double avg = 0;
    for(double j : grade){
        avg += j/max*100;
    }
    cout << fixed << setprecision(10) << avg/n;
}