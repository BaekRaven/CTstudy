#include <iostream>
#include <list>
using namespace std;

list<char> mylist;

int main(void) {	
	string str;
	cin >> str;
	for (char c : str) {
		mylist.push_back(c);
	}
	list<char>::iterator cursor = mylist.end();
	
	int n;
	cin >> n;
	char cmd;
	while (n>0) {
		n--;		
		cin >> cmd;
		if (cmd == 'L') {
			if (cursor != mylist.begin()) {
				cursor--;
			}
		}
		else if (cmd == 'D') {
			if (cursor != mylist.end()) {
				cursor++;
			}
		}
		else if (cmd == 'B') {
			if (cursor != mylist.begin()) {
				cursor = mylist.erase(--cursor);
			}
		}
		else if (cmd == 'P') {
			cin >> cmd;
			mylist.insert(cursor, cmd);
		}
		
	}
	for (char c : mylist) {
		cout << c;
	}	
}