// https://www.codechef.com/problems/ALTARAY

#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int* arr = new int[n];
        int* ans = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int i = 0;
        while(i < n) {
            int flag = 1, count = 1;
            char c;
            if(arr[i] < 0) c = 'n';
            else c = 'p';
            i++;
            while(i < n && flag == 1) {
                if(c == 'n' && arr[i] > 0) {
                    count++;
                    i++;
                } else if(c == n && )
            }

        }

    }





}
