#include <iostream>
#include <queue>
using namespace std;
int board[502][502];
bool vis[502][502]; 
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; // 상하좌우 네 방향을 의미

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	int mx = 0; // 그림의 최댓값
	int num = 0; //  그림의 수
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0 || vis[i][j]) continue;
			num++;
			queue<pair<int, int>> Q;
			vis[i][j] = 1;
			Q.push({ i,j });
			int area = 0;
			while (!Q.empty()) {
				area++;
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; 
					//범위를 벗어나지 않았나 체크
					if (vis[nx][ny] || board[nx][ny] != 1) continue; 
					//vis가 1이라 이미 방문했거나 board가 1이 아니라서 그림이 아니라면 
					vis[nx][ny] = 1; //위에 과정을 다 통과했으면 방문했다고 vis에 추가
					Q.push({ nx,ny }); //큐에 추가
				}
			}
			mx = max(mx, area);
		}		
	}
	cout << num << "\n" << mx;
	return 0;
}