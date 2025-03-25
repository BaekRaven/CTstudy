#include <iostream>
#include <string>
using namespace std;

int main() {  
    string str[3];
    cin >> str[0] >> str[1] >> str[2];
    int num;
    for(int i=0; i<3; i++){
        if(atoi(str[i].c_str())!=0){
            num = atoi(str[i].c_str()) + 3 - i;
        }
    }
    if(num%3==0&&num%5==0)
        cout <<"FizzBuzz";    
    else if(num%3==0)
        cout <<"Fizz";
    else if(num%5==0)
        cout <<"Buzz";
    else
        cout << num;
}