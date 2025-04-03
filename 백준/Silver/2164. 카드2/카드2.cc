#include <iostream>
#include <queue>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	queue<int> queue;
	for (int i = 1; i <= n; i++) {
		queue.push(i);
	}
	int a = 0;
	while (queue.size()!=1) {
		queue.pop();
		a = queue.front();
		queue.pop();
		queue.push(a);
	}
	cout << queue.front();
}