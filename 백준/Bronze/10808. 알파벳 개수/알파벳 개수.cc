#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int freq[26] = {};	
	string s;
	cin >> s;
	for (char c : s) {
		freq[c - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		cout << freq[i] << " ";
	}
}