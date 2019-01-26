// https://www.codechef.com/problems/PEC005

#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int* arr = new int[n];
        int* dp = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        dp[0] = 1;
        if(arr[1] >= arr[0]) {
            dp[1] = 2;
        } else {
            dp[1] = 1;
        }
        for(int i = 2; i < n; i++) {
            
        }
    }


}
