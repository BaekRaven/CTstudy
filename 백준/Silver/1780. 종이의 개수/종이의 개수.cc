#include <iostream>
using namespace std;
int paper[2500][2500];
int cnt[3]; 

bool check(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (paper[x][y] != paper[i][j]) return false;
		}
	}
	return true;
}

void func(int x, int y, int n) {
	if (check(x, y, n)) {
		cnt[paper[x][y] + 1] += 1;
		return;
	}
	n = n / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			func(x+i*n, y+j*n, n);	
		}
	}	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}
	func(0, 0, n);
	for (int i = 0; i < 3; i++)
		cout << cnt[i] << "\n";
}