#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string str1, str2;
        int flag = 1;
        cin >> str1 >> str2;
        int len = str1.length();
        for(int i = 0; i < len; i++) {
            if(str1[i] != '?' && str[i] != '?' && str1[i] != str2[i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) {
            cout << "No";
        } else {
            cout << "Yes";
        }

    }



}
