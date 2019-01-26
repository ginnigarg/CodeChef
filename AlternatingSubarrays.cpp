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
        int* dp = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        dp[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] < 0 && arr[i + 1] < 0) {
                dp[i] = 1;
            } else if(arr[i] > 0 && arr[i + 1] > 0) {
                dp[i] = 1;
            } else {
                dp[i] = dp[i + 1] + 1;
            }
        }
        for(int i = 0; i < n; i++) {
            cout << dp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
