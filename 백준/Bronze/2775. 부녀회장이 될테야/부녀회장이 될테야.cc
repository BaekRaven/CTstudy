#include <iostream>
using namespace std;

int solution(int k, int n){
    if(n==1){
        return 1;
    }
    else if (k==0){
        return n;
    }
    else{
        return (solution(k-1, n) +solution(k, n-1));
    }
}
int main() {
    int t, k, n;
    cin >> t;

    for(int i=0; i<t; i++){
        cin >> k >> n ;
        int answer = solution(k,n);
        cout << answer <<"\n";
    }    
}