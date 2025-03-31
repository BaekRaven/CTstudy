#include <iostream>
#include <algorithm>
using namespace std;

char WhiteBoard[8][8] = {
    'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W'
};
char BlackBoard[8][8] = {
    'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B',
	'B','W','B','W','B','W','B','W',
	'W','B','W','B','W','B','W','B'
};

char chess[51][51];

int cntWB(int x, int y);
int cntBB(int x, int y);

int main() {  
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> chess[i][j];
        }
    }   
    int minVal = 65;//다 색칠해서 나올 수 있는 최대 값은 64다
    for(int i=0; i+8<=n; i++){
        for(int j=0; j+8<=m; j++){
            int tmp = min(cntWB(i,j),cntBB(i,j));
            if(minVal > tmp) minVal = tmp;
        }
    }
    cout << minVal;    

    return 0;
}

int cntWB(int x, int y){
    int cnt=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(chess[x+i][y+j] != WhiteBoard[i][j]) cnt++;
        }
    }
    return cnt++;
}
int cntBB(int x, int y){
    int cnt=0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(chess[x+i][y+j] != BlackBoard[i][j]) cnt++;
        }
    }
    return cnt++;
}