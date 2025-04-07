#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long low, mid, high;

int main() {
	int k, n, answer;
	cin >> k >> n;
	vector<int> v;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	low = 1;
	high = v[k-1];
	answer = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += v[i] / mid; //잘라서 몇개 만들 수 있나
		}
		if (cnt >= n) { //만들어야 하는 n의 개수보다 크면 성공
			low = mid + 1;
			if (answer < mid)
				answer = mid;
		}
		else {
			high = mid - 1;
		}
	}
	cout << answer;
}