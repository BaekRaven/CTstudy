#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	cin >> T;
	
	while (T--) {
		int n, m;
		int cnt = 0;

		cin >> n >> m;

		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			q.push({ i, x });//인덱스, 중요도
			pq.push(x);
		}
		while (!q.empty()) {
			int idx = q.front().first;
			int priority = q.front().second;
			q.pop();

			if (pq.top() == priority) {
				pq.pop();
				cnt++;

				if (idx == m) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ idx, priority });
			}
		}
	}
}