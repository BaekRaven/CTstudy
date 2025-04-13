#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int a[10] = {};	
	
	int n;
	cin >> n;
	while (n) {
		a[n % 10]++;
		n /= 10;
	}
	int answer = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		answer = max(answer, a[i]);
	}
	answer = max(answer, (a[6] + a[9] + 1) / 2);
	
	cout << answer;
}