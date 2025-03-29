#include <iostream>
using namespace std;

int main() {  
    int n;
    cin >> n;
    int weight[n], height[n];
    for(int i=0; i<n; i++){
        cin >> weight[i] >> height[i];
    }
    for(int i=0; i<n; i++){
        int grade = 1;
        for(int j=0; j<n; j++){            
            //키 몸무게 둘다 작으면 등수 내리기
            if(weight[i] < weight[j] && height[i] < height[j]){ 
                grade ++;
            }
       }
       cout << grade <<" ";
    }
}