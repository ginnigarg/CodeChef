#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n;
        int* arr = new int[n];
        int* sum = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        sum[0] = arr[0];
        cout << endl;
        for(int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + arr[i];
        }
        int diff = max(sum[k] )
        cout << diff << endl;
    }
}
