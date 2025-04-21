#include <iostream>
#include <stack>
using namespace std;


int main() {
	int T, ans=0;
	cin >> T;
	while (T--) {
		stack<char> s;
		string str;
		cin >> str;
		for (char c : str) {
			if (s.empty()) {
				s.push(c);
			}
			else {
				if (c == s.top()) {
					s.pop();
				}
				else {
					s.push(c);
				}
			}
		}
		if (s.empty()) {
			ans++;
		}
	}
	cout << ans;
}