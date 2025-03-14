#include <iostream>
#include <string>
using namespace std;

int main() {    
    int n;
    string num;

    cin >> n;
    cin >> num;

    int a[n];
    string num_temp;
    for(int i=0; i<n; i++){
        num_temp = num;
        a[i] = stoi(num_temp.substr(i,1));
    }
    int result = 0;
    for(int i=0; i<n; i++){
        result += a[i];
    }
    cout << result;
}