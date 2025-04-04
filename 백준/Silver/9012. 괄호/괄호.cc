#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int n , flag;
	cin >> n;
	string str;
	while (n > 0) {
		stack <char> s;
		n--;
		cin >> str;
		flag = 0;
		for (char c : str) {
			if (c == '(' ) {
				s.push(c);
			}
			else { //c == ')'
				if (!s.empty()&&s.top()=='(')
					s.pop();
				else {
					flag = 1;
					break;
				}				
			}
		}
		if(s.empty()&&flag==0)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}