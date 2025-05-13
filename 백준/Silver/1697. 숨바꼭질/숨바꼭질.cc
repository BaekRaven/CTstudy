#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second

int board[100002];
int dist[100002];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	queue<int> q;
	dist[n] = 1;
	q.push(n);
	while (dist[k]==0) {
		int cur = q.front(); q.pop();
		for (int i : {cur - 1, cur + 1, 2 * cur}) {
			if (i > 100000 || i < 0 || dist[i] == 1) continue;
			q.push(i);
			dist[i] = 1;
			board[i] = board[cur] + 1;
		}
	}
	cout << board[k];
	return 0;
}