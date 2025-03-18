#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int j = 0;
    for(int i=1; i<n; i++){
        sum = i;
        j=i;
        while(j){
            sum += j%10;
            j /= 10;
        }
        if(sum == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;
}