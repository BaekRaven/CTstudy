#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	vector<int> v;
	int count[8001] = { 0, };

	for (int i = 0; i < T; i++) {
		int x;
		cin >> x;
		v.push_back(x);		
		count[x + 4000]++;
	}
	sort(v.begin(), v.end());
	double temp = 0;
	for (int i=0; i<T; i++)
		temp +=v[i];
	temp = temp / T;
	int avg = floor(temp + 0.5);
	int middle, mode, range; //중앙값 , 최빈값, 범위
	if (T == 1)
		middle = v[0];
	else
		middle = v[T / 2];
	range = v[T - 1]- v[0];

	int max = -99999;
	
	for (int i = 0; i < 8001; i++) {		
		if (max < count[i])
			max = count[i];
	}
	int cnt=0;
	for (int i = 0; i < 8001; i++)
	{	
		if (max == count[i])
		{
			mode = i - 4000;
			cnt++;
		}
		if (cnt == 2)		//	최빈값이 여러개일 경우
			break;
	}
	cout << avg << "\n";
	cout << middle << "\n";
	cout << mode << "\n";
	cout << range << "\n";
}