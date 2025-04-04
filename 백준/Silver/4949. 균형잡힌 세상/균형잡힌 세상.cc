#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	while (true) {
		string str;
		getline(cin, str);

		if (str == ".") {
			break;
		}
		stack<char> st;
		bool flag = 0;
		for (char c : str) {
			if (c == '(' || c == '[') {
				st.push(c);	
			}
			else if (c == ')') {
				if (!st.empty() && st.top() == '(') {
					st.pop();
				}
				else{
					flag = 1;
					break;
				}
			}
			else if (c == ']') {
				if (!st.empty() && st.top() == '[') {
					st.pop();
				}
				else {
					flag = 1;
					break;
				}
			}		
		}
		if (flag == 0 && st.empty()) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
		st = {};
	}
}