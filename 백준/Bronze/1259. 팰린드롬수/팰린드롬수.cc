#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n,j;
    while(true){
        cin >> str;
        n = str.length();
        if(str=="0")
            break;
        j = 0;
        if(n==1)
            cout << "yes\n";            
        else{
            for(int i=0; i<n/2; i++){
                if(str[i] != str[n-1-i]){
                    j++;
                }                
            }
            if(j==0)
                cout << "yes\n";
            else
                cout << "no\n";
        }        
    }
}