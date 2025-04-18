#include <iostream>
#include <list>
using namespace std;


list<char> a;
int main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	
	while (n--) {
		a = {};
		string s;
		cin >> s;
		list<char>::iterator iter = a.begin();
		for (char c : s) {
			if (c == '<') {
				if (iter != a.begin()) iter--;
			}
			else if (c == '>') {
				if (iter != a.end()) iter++;
			}
			else if (c == '-') {
				if (iter != a.begin()) {
					iter = a.erase(--iter);
				}
			}
			else {
				a.insert(iter, c);
			}
		}
		for (auto c : a) cout << c;
		cout << "\n";
	}
}