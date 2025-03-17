#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int size[6];
    for (int i=0; i<6; i++){
        cin >>size[i];
    }
    int result = 0;
    int t ,p;
    cin >>t>>p;
    for (int i=0; i<6; i++){
        if(size[i]%t==0)
            result += size[i]/t;
        else
            result += size[i]/t +1;
    }
    cout << result <<"\n";
    cout << n/p <<" "<< n%p;
}