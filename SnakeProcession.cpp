// https://www.codechef.com/problems/SNAKPROC

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int flag = 0;
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if(flag == 0 && c == 'T') {
                flag = -1;
            } else if(flag == 1 && c == 'H') {
                flag = -1;
            }
            if(c == 'H' && flag != -1)  flag = 1;
            if(c == 'T' && flag != -1)  flag = 0;
        }
        if(flag == -1 || flag == 1)  cout << "Invalid" << endl;
        else cout << "Valid" << endl;
    }
    return 0;
}

