#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n, idx;
    cin >> n;
    int num[10001] = {};
    for(int i=0; i<n; i++){
        cin >> idx;
        num[idx]++;
    }      
    for(int i=1; i<10001; i++)
	{
		for(int j=0; j<num[i]; j++)
		{
			cout << i << "\n";
		}
	}
}