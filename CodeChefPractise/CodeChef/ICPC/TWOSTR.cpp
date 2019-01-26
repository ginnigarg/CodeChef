#include <iostream>
#define ll long long int
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string str1, str2;
        cin >> str1 >> str2;
        bool flag = true;
        for(int i = 0; i < str1.length(); i++) {
            if(str1[i] == '?' || str2[i] == '?') {
                continue;
            }
            if(str1[i] != str2[i]) {
                flag = false;
            }
        }
        if(flag)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
    return 0;
}
