#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second

int board[52][52];
int vis[52][52];
int m, n, k;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; 
queue<pair<int, int>> q;

void bfs(int x, int y) {
	vis[x][y] = 1;
	q.push({ x,y });
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
			if (board[nx][ny] != 1 || vis[nx][ny] == 1) continue;
			vis[nx][ny] = 1;
			q.push({ nx,ny });
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while (T--) {
		cin >> m >> n >> k;		
		int x, y;
		for (int i = 0; i < k; i++) {			
			cin >> x >> y;
			board[y][x] = 1;			
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (board[i][j] == 1 && vis[i][j]==0) {
					bfs(i, j);
					ans++;
				}				
			}
		}		
		cout << ans << "\n";
		for (int i = 0; i < n; i++) {
			fill(board[i], board[i] + m, 0);
			fill(vis[i], vis[i] + m, 0);
		}
	}
	return 0;
}