#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double result = a/double(b);

    cout << fixed;
    cout.precision(9);
    cout << result;
}