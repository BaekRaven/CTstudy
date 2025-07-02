#include <iostream>
using namespace std;
int QTree[65][65];

bool check(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (QTree[x][y] != QTree[i][j]) return false;
		}
	}
	return true;
}

void func(int x, int y, int n) {
	if (check(x, y, n)) {
		cout << QTree[x][y];
		return;
	}
	cout << "(";
	n = n / 2;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			func(x + i * n, y + j * n, n);
		}
	}
	cout << ")";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < n; j++) {
			QTree[i][j] = str[j] - '0';
		}
	}
	func(0, 0, n);
}