// https://www.codechef.com/problems/MAXDIFF

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int count = k;
        if(n - k < k) {
            count = n - k;
        }
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < count; i++) {
            sum1 += arr[i];
        }
        for(int i = count; i < n; i++) {
            sum2 += arr[i];
        }
        cout << sum2 - sum1 << endl;
    }
    return 0;
}
