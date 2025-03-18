#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num=1;
    int dis = 1;
    while(num<n){
        num += 6*dis;
        dis += 1;
    }
    cout << dis;
}