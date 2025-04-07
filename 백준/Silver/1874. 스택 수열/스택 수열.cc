#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int T;
	cin >> T;
	stack<int> s;
	vector<char> answer;
	int cnt = 1;

	for (int i = 0; i < T; i++) {
		int num;
		cin >> num;
		
		while (cnt <= num) {
			s.push(cnt);
			cnt++;
			answer.push_back('+');
		}
		if (s.top() == num) {
			s.pop();
			answer.push_back('-');
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	for (int i = 0; i < answer.size(); i++){
		cout << answer[i] << "\n"; 
	}
}