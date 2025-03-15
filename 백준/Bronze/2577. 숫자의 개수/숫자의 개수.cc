#include <iostream>
#include <string>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int num = a*b*c;
    int n=0;
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    while(num!=0){
        n = num%10;
        arr[n]++;
        num /= 10;
    }
    for(int i=0; i<10; i++){
        cout << arr[i] <<"\n";
    }
}