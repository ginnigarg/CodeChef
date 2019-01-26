// https://www.codechef.com/SNCKQL19/problems/QUALPREL

#include <iostream>
#include <algorithm>
using namespace std;

int ubound(int* arr, int start, int end, int num) {
    if(start >= end) return start;
    int mid = start + (end - start) / 2;
    if(arr[mid] < num) return ubound(arr, start, mid, num);
    return ubound(arr, mid + 1, end, num);
}

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
        int x = arr[n - k];
        cout << n - (lower_bound(arr, arr + n, x) - arr)<< endl;
    }


}
