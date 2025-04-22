#include <iostream>
#include <stack>
using namespace std;

int main() {
	int ans = 0;
	stack<char> st;
	string str;
	cin >> str;
	int sz = str.length();
	for (int i = 0; i < sz; i++) {
		if (str[i] == '(') st.push(str[i]);
		else {
			if (str[i - 1] == '(') {
				st.pop();
				ans += st.size();
			}
			else {
				st.pop();
				ans++;
			}
		}
	}
	cout << ans << "\n";
	return 0;
}