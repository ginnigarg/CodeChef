#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size, ans;
        cin >> size;
        int* arr = new int[size];
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        if(arr[1] - arr[0] > 1) {
            ans = arr[0];
        } else if(arr[size - 1] - arr[size - 2] > 1) {
            ans = arr[size - 1];
        } else {
            for(int i = 1; i < size; i++) {
                if(arr[i] == arr[i - 1]) {
                    ans = arr[i];
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
