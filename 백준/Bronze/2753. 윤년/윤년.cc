#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(0);
    
    int year;
    cin >> year;

    if(year%4==0){
        if(year%100!=0)
            cout << 1;
        else{
            if(year%400==0)
                cout << 1;  
            else
                cout << 0;
        }
    }
    else
        cout << 0;
}