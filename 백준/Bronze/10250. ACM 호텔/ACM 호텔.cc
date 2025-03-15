#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int h[t],w[t],n[t];
    for(int i=0; i<t; i++){
        cin >> h[i] >> w[i] >> n[i];
    }
    for(int i=0; i<t; i++){
        if(n[i]%h[i]==0)
            cout << h[i]*100+n[i]/h[i] << "\n";
        else
            cout << n[i]%h[i]*100+n[i]/h[i]+1 << "\n";
    }  
}