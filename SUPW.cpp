// https://www.codechef.com/ZCOPRAC/problems/ZCO14002

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int minimum(int a, int b, int c) {
    return min(min(a, b), c);
}

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* dp = new int[n];
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = minimum(arr[0], arr[1], arr[3]);
    for(int i = 3; i < n; i++) {
        dp[i] = minimum(dp[i - 1] + arr[i], dp[i - 2] + arr[i - 1], dp[i - 3] + arr[i - 2]);
    }
    cout << dp[n - 1] << endl;
    return 0;
}
