#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc-- > 0) {
		string str;
		cin >> str;
		int* arr = new int[2];
		for(int i = 0; i < str.length(); i++) {
			if(str[i] == 'R') {
				arr[0]++;
			} else {
				arr[1]++;
			}
		}
		if(arr[0] == arr[1]) {
			cout << "yes" << endl;
		} else {
			cout << "no" << endl;
		}

	}



}
