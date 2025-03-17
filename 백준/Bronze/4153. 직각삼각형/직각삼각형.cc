#include <iostream>
using namespace std;

int main() {
    while(true){
        int a,b,c;
        int temp;

        cin >> a >> b >> c;        
        if(c<a)
        {
            temp = c;
            c = a;
            a = temp;            
        }
        if(c<b)
        {
            temp = c;
            c = b;
            b = temp;            
        }
        if(a==0 && b==0 && c==0){
            break;
        }
        if(a*a + b*b == c*c){
            cout <<"right" << "\n";
        }
        else
            cout <<"wrong" << "\n";
    }
}