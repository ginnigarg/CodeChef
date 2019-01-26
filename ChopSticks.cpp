// https://www.codechef.com/problems/TACHSTCK

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0, i = 0;
    sort(arr, arr + n);
    for(i = 0; i < n - 1; i++) {
        if(arr[i + 1] - arr[i] <= m) {
            count++;
            i++;
        }
    }
    cout << count << endl;
    return 0;
}
