#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num;
    int min = 1000000, max = -1000000;
    for(int i=0; i<n; i++){
        cin >> num;
        if(max < num)
            max = num;
        if(min > num)
            min = num;
    }
    cout << min << " " << max;
}