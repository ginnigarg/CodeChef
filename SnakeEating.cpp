// https://www.codechef.com/problems/SNAKEEAT

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(int* arr, int* sum, int start, int end, int num) {
    if(start >= end) {
        return start;
    }
    int mid = start + (end - start) / 2;
    if(arr[end] - arr[mid]) 



}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, q;
        cin >> n >> q;
        int* arr = new int[n];
        int* sum = new int[n];
        int* queries = new int[q];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        sum[0] = arr[0];
        for(int i = 1; i < n; i++) {
            sum[i] = sum[i - 1] + arr[i];
        }
        while(q--) {
            int query;
            cin >> query;
            int lb = lower_bound(arr, arr + n, query) - arr;
            int ans = n - binarySearch(arr, sum, n, 0, lb - 1, query);
            cout << ans << endl;
        }
    }
    return 0;
}
