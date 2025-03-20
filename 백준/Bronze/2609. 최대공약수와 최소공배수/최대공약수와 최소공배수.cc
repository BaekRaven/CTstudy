#include <iostream>
using namespace std;

int main() {
    //유클리드 호제법  
    int num1, num2;
    cin >> num1 >> num2;

    int big = (num1 >= num2)? num1 : num2;
    int small = (num1 >= num2)? num2 : num1;    
    
    int r = big%small;
    while(r!=0){        
        big = small;
        small = r;   
        r = big%small;
    }
    cout << small <<"\n";
    cout << num1*num2/small <<"\n";       
}