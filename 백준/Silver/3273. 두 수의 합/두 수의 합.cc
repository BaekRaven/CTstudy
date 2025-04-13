#include <iostream>
#include <cmath>
using namespace std;

int a[1000000];
bool occur[2000001];

int main(void) {	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = 0;
	int x;
	cin >> x;

	for (int i = 0; i < n; i++) {
		if (x - a[i] > 0 && occur[x - a[i]]) ans++;
		else occur[a[i]] = true;
	}
	cout << ans;
}