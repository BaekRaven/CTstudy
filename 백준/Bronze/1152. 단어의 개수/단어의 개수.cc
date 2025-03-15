#include <iostream>
#include <string>
using namespace std;

int main() {
    int n=0;
    while(true){
        string str;
        cin >> str;
        if(cin.eof())
            break;
        else
            n++;
    }
    cout << n;
}