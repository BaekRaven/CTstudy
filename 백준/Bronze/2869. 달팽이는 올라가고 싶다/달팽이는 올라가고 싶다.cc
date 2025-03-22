#include <iostream>
using namespace std;

int main() {
    int a,b,v;
    cin >> a >> b >> v;
    int day=0;
    if(a >= v){
        day = 1;
    }
    else if((v-a)%(a-b)==0){
        day = (v-a)/(a-b)+1;
    }
    else{
        day = (v-a)/(a-b)+2;
    }
    cout << day;    
}