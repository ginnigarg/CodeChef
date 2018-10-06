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
        for(int i = 0 ; i < size; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        int min = arr[1] - arr[0];
        for(int i = 1; i < size - 1; i++) {
            int temp = arr[i + 1] - arr[i];
            if(min > temp) {
                min = temp;
            }
        }
        cout << min << endl;
    }
    return 0;
}
