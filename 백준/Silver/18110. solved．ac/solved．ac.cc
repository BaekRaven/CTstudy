#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t,n;
	cin >> t;
	vector <int>v;
	if (t == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < t; i++) {
		cin >> n;
		v.push_back(n);
	}

	double a = (double)t * 0.15;
	int num = floor(a+0.5);
	sort(v.begin(), v.end());

	int result = 0;
	for (int i = num; i < t - num; i++) {
		result += v[i];
	}

	int answer= floor((double)result/(t-num*2) + 0.5);
	cout << answer;
}