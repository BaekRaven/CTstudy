#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n ,t;
	stack<int> s;
	cin >> t;
	
	while (t>0) {
		t--;
		string command;
		cin >> command;
		if (command == "push") {
			cin >> n;
			s.push(n);
		}
		else {
			if (command == "pop") {
				if (s.empty()) {
					cout << -1 << "\n";
				}
				else {
					n = s.top();
					s.pop();
					cout << n << "\n";
				}
			}
			else if (command == "size") {
				n = s.size();
				cout << n << "\n";
			}
			else if (command == "empty") {
				if (s.empty()) {
					cout << 1 << "\n";
				}
				else {
					cout << 0 << "\n";
				}
			}
			else if (command == "top") {
				if (s.empty()) {
					cout << -1 << "\n";					
				}
				else {
					n = s.top();
					cout << n << "\n";
				}
			}
			else {

			}
		}	
	}	
}