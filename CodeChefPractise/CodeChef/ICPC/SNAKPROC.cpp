#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, count = 0;
        cin >> n;
        bool flag = true;
        char ch;
        for(int i = 0; i < n; i++) {
            cin >> ch;
            if(ch == 'H') {
                count++;
            }
            if(ch == 'T') {
                if(count != 1) {
                    flag = false;
                } else {
                    count--;
                }
            }
        }
        if(count == 0 && flag == true) {
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}
