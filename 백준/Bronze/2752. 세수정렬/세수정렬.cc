#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v(3);
	for (int i = 0; i < 3; i++) {
		int n;
		cin >> n;
		v[i] = n;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++) {
		cout << v[i] << " ";
	}
}