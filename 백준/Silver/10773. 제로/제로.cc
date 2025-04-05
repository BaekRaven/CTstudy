#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack <int> s;

	while (n > 0) {
		n--;
		int num;
			
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else
			s.push(num);
	}
	int sum=0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}