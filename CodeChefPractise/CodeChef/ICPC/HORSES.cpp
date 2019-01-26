#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int diff = arr[1] - arr[0];
        for(int i = 1; i < n; i++) {
            int temp = arr[i] - arr[i - 1];
            diff = min(diff, temp);
        }
        cout << diff << endl;
    }
    return 0;
}
