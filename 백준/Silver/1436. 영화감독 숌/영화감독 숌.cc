#include <iostream>
#include <string>
using namespace std;

int main() {  
    int n;
    cin >> n;
    int title = 665;
	string temp;
	int check = 0;
	while(true) {
		title++;
		temp = to_string(title);
		if(temp.find("666") != string::npos){
			check++;
			if(check == n){
				cout << title;
				break;
			}
		}
	}
}