#include <iostream>
#include <algorithm>

using namespace std;
int num[100000];
int n;

void binary_search(int a) { //이진 탐색
	int low = 0;
	int mid = 0;
	int high = n - 1;
	
	while (low <= high) {
		mid = (low + high) / 2;
		if (num[mid] == a) {//값을 찾았으면 1출력
			cout << 1 << "\n";
			return;
		}
		else if (num[mid] > a) {
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	//못찾았으면 0 출력
	cout << 0 << "\n";
	return;
}


int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int m;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	sort(num, num + n);
	cin >> m;

	int x;
	for (int i = 0; i < m; i++) {
		cin >> x;
		binary_search(x);
	}
}