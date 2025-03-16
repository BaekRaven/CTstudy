#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    int score,plus;
    int grade[t];

    for(int i=0; i<t; i++){
        string str;
        cin >> str;
        score = 0,plus = 0;
        
        for(char c : str){
            if(c =='O'){
                plus++;
                score += plus;
            }
            else {
                plus = 0;
            }
        }
        grade[i] = score;
    }
    for(int i=0; i<t; i++){
        cout << grade[i] << "\n";
    }
}