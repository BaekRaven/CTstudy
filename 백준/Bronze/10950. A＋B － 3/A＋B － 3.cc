#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int a[num], b[num];        
    for(int i=0; i<num; i++){
        cin >> a[i] >> b[i] ;        
    }
    for(int i=0; i<num; i++){
        cout << a[i]+b[i] << "\n";
    }    
}