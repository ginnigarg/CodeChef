// https://www.codechef.com/problems/ANUUND

#include <iostream>
#include <algorithm>
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
        for(int i = 0; i < n - 1; i++) {
            if(i % 2 == 0) {
                if(arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            } else {
                if(arr[i] < arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
