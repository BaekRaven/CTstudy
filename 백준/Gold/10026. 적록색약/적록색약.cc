#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second

string board[102];
bool vist[102][102];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int N;

void bfs(int i, int j) {
	queue<pair<int, int>> Q;
	Q.push({ i,j });
	vist[i][j] = 1;
	while (!Q.empty()) {		
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
			if (board[i][j] != board[nx][ny] || vist[nx][ny] == 1) continue;
			Q.push({ nx,ny });
			vist[nx][ny] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i <N; i++)
		cin >> board[i];
    
	int area1 = 0;
	int area2 = 0;    
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {			
			if (!vist[i][j]) {
				area1++;
				bfs(i, j);
			}				
		}		
	}
	for (int i = 0; i < N; i++)
		fill(vist[i], vist[i] + N, false);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[i][j] == 'G') board[i][j] = 'R';			
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {			
			if (!vist[i][j]) {
				area2++;
				bfs(i, j);
			}
		}
	}

	cout << area1 << " " << area2;
	
	return 0;
}