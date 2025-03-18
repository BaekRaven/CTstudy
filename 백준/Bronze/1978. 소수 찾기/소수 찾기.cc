#include <iostream>
using namespace std;

bool is_prime_number(int n){
    if(n<2)
        return false;
    for(int i=2; i<n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int num;
    int prime_num = 0;
    for(int i=0; i<n; i++){
        cin >> num;
        if(is_prime_number(num)) prime_num++;
    }
    cout << prime_num;
}