#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second

string board[1002];
int dist1[1002][1002];
int dist2[1002][1002];

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 }; 


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int R,C;
	cin >> R >> C;
	for (int i = 0; i < R; i++)
		cin >> board[i];
	queue<pair<int, int> > Q1; //불
	queue<pair<int, int> > Q2;
	for (int i = 0; i < R; i++) {
		fill(dist1[i], dist1[i] + C, -1);
		fill(dist2[i], dist2[i] + C, -1);
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (board[i][j] == 'F') {
				Q1.push({ i,j });
				dist1[i][j] = 0;
			}
		}
	}
	while (!Q1.empty()) {
		auto cur = Q1.front(); Q1.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C) continue;
			if (board[nx][ny] == '#' || dist1[nx][ny] >= 0) continue; //벽이거나 거리를 이미 측정해서 넣었으면 continue
			Q1.push({ nx,ny });
			dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
		}
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (board[i][j] == 'J') {
				Q2.push({ i,j });
				dist2[i][j] = 0;
			}
		}
	}
	while (!Q2.empty()) {
		auto cur = Q2.front(); Q2.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= R || ny >= C) { //범위를 벗어나면 탈출
				cout << dist2[cur.X][cur.Y] + 1;
				return 0;
			}
			if (board[nx][ny] == '#' || dist2[nx][ny] >= 0) continue; //벽이거나 거리를 이미 측정해서 넣었으면 continue
			int time = dist2[cur.X][cur.Y] + 1;
			if (dist1[nx][ny] != -1 && time >= dist1[nx][ny]) continue;
			Q2.push({ nx,ny });
			dist2[nx][ny] = time;
		}
	}
	cout << "IMPOSSIBLE"; //탈출실패
	
	return 0;
}