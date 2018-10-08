#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size;
        cin >> size;
        int* arr = new int[size];
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        int flag = 1;
        for(int i = 1; i < size; i++) {
            if(arr[i] - arr[i - 1] >= 2) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
