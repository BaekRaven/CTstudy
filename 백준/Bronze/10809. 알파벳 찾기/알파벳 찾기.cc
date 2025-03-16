#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int alphabat[26];
    for(int i=0; i<26; i++){
        alphabat[i] = -1;
    }

    int j=0;
    for(char c : str){
        if(alphabat[int(c)-97]==-1)
            alphabat[int(c)-97] = j;        
        j++;
    }
    for(int i=0; i<26; i++){
        cout << alphabat[i] <<" ";
    }
}