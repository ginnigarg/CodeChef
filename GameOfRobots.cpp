#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string str;
        cin >> str;
        int len = str.length();
        int* arr = new int[len];
        for(int i = 0; i < len; i++) {
            arr[i] = 0;
        }
        int flag = 1;
        for(int i = 0; (i < len) && (flag == 1); i++) {
            if(str[i] == '.') continue;
            int r = str[i] - '0';
            for(int j = i; (j <= i + r) && (j <  len); j++) {
                if(arr[j] == 1)  {
                    flag = 0;
                    break;
                }   
                arr[j] = 1;
            }
            for(int j = i - 1; (j >= i - r) && (j >= 0); j--) {
                if(arr[j] == 1) {
                    flag = 0;
                    break;
                }
                arr[j] = 1;
            }
        }
        if(flag == 1)  cout << "safe" << endl;
        else cout << "unsafe" << endl;
    }
    return 0;
}
