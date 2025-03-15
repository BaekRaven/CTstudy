#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    string str;
    for(int i=0; i<t; i++){
        cin >> n >> str;        
        for(char c : str){
            for(int j=0; j<n; j++){
                cout << c;
            }
        }        
        cout << "\n";
    }
}