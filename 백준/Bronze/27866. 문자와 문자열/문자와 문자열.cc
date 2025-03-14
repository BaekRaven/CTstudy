#include <iostream>
#include <string>
using namespace std;

int main() {    
    string str;
    int i;

    cin >> str;
    cin >> i;
    cout << str.substr(i-1, 1);
}