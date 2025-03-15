#include <iostream>
using namespace std;

int main() {
    int num[8];
    for(int i=0; i<8; i++){
        cin >> num[i];
    }
    int asc = 0, des=0;
    for(int i=0; i<7; i++){
        if(num[i] == num[i+1]-1)
            asc++;
        if(num[i] == num[i+1]+1)
            des++;
    }
    
    if(asc == 7)
        cout << "ascending";
    else if(des == 7)
        cout << "descending";
    else
        cout << "mixed";
}