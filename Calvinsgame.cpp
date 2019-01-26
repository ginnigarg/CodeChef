// https://www.codechef.com/INOIPRAC/problems/INOI1301

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int* dpf = new int[n];
    int* dpb = new int[n];
    dpf[k - 1] = 0;
    dpf[k] = arr[k];
    for(int i = k + 1; i < n; i++) {
        dpf[i] = max(dpf[i - 1] + arr[i], dpf[i - 2] + arr[i]);
    }
    int max = k - 1;
    for(int i = k; i < n; i++) {
        if(arr[i] > arr[max]) {
            max = i;
        }
    }
    dpb[max] = 0;
    dpb[max  - 1] = dpf[max] + arr[]
    for(int i = n - 1; i >= 0; i--) {
        dpf
    }


}
