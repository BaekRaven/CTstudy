#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n ,t;
	queue<int> q;
	cin >> t;
	
	while (t>0) {
		t--;
		string command;
		cin >> command;
		if (command == "push") {
			cin >> n;
			q.push(n);
		}
		else {
			if (command == "pop") {
				if (q.empty()) {
					cout << -1 << "\n";
				}
				else {
					n = q.front();
					q.pop();
					cout << n << "\n";
				}
			}
			else if (command == "size") {
				n = q.size();
				cout << n << "\n";
			}
			else if (command == "empty") {
				if(q.empty())
					cout << 1 << "\n";
				else
					cout << 0 << "\n";
			}
			else if (command == "front") {
				if (q.empty()) {					
					cout << -1 << "\n";
				}
				else {
					n = q.front();
					cout << n << "\n";
				}
			}
			else if (command == "back") {
				if (q.empty()) {
					cout << -1 << "\n";
				}
				else {
					n = q.back();
					cout << n << "\n";
				}
			}
			else {

			}
		}	
	}	
}