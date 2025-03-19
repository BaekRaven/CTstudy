#include <iostream>
using namespace std;

int main() {
    int l;
    cin >> l;
    char s[l];  
    cin >> s;
    long long sum = 0;
    long long hash = 1;
    for(int i=0; i<l; i++){
        int temp = s[i]-'a'+1;        
        sum = (sum+temp*hash)%1234567891;
        hash = (hash*31)%1234567891;
    }
    cout << sum;
}