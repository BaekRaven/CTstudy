#include <iostream>
#include <algorithm>

using namespace std;

int arr[500000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m,o;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		arr[i] = num;
	}
	sort(arr, arr+n);
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> o;
		cout << upper_bound(arr, arr + n, o) - lower_bound(arr, arr + n, o) << " ";
	}
}