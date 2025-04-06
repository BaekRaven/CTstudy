#include <iostream>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n ,k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	int num, check = 0;
	queue<int> answer;
	while (!q.empty()) {
		check++;
		num = q.front();
		q.pop();
		if (check == k) {
			check = 0;
			answer.push(num);			
		}
		else {
			q.push(num);
		}
	}
	cout << "<";
	while (true) {
		cout << answer.front();
		answer.pop();
		if (answer.empty()) {
			break;
		}
		else {
			cout << ", ";
		}
	}
	cout << ">";	
}