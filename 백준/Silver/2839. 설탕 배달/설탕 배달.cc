#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int  big=0, small=0;
	long long int  max = 0;
	if (n % 3 == 0)
		small = n / 3;
	max = n / 5;
	for(int i = 1; i < max+1; i++) {
		if ((n - 5 * i) % 3 == 0) {
			big = i;
			small = (n - 5 * i) / 3;
		}
	}

	if (big == 0 && small == 0)
		cout << -1;
	else
		cout << big+small;
}