#include <iostream>
using namespace std;

int countZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i > 0; i *= 5)
    {
        count += n / i;
    }
    return count;
}

int main() {  
    int n;
    cin >> n;

    int cnt = countZeros(n);
    cout << cnt;
	
    return 0;
}