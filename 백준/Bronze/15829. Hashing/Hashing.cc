#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int l;
    cin >> l;
    char s[l];  
    cin >> s;
    double sum =0;
    for(int i=0; i<l; i++){
        sum += (int(s[i])-96)*pow(31,i);        
    }
    cout << int(sum)%1234567891;
}