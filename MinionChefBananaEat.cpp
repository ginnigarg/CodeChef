// https://www.codechef.com/problems/MINEAT

#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

unsigned long long int binarySearch(int* arr, int size, unsigned long long int start, unsigned long long int end, int num) {
    if(start >= end) {
        return start;
    }
    unsigned long long int mid = start + (end - start) / 2;
    unsigned long long int ans = 0;
    for(int i = 0; i < size; i++) {
        ans += ceil((double)arr[i] / mid);
        if(ans > num) return binarySearch(arr, size, mid + 1, end, num);
    }
    if(ans <= num) return binarySearch(arr, size, start, mid, num);
    return binarySearch(arr, size, mid + 1, end, num);
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n ,h, maximum = INT_MIN;
        cin >> n >> h;
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] > maximum) {
                maximum = arr[i];
            }
        }
        sort(arr, arr + n);
        cout << binarySearch(arr, n, 1, maximum, h) << endl;

    }
    return 0;
}
