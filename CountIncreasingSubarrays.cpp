// https://www.codechef.com/problems/SUBINC

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
        dp[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] <= arr[i + 1]) {
                dp[i] = dp[i + 1] + 1;
            } else {
                dp[i] = 1;
            }
        }
        long long int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += dp[i];
        }
        cout << sum << endl;
    }
    return 0;
}
