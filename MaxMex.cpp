#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size, k, i;
        cin >> size >> k;
        int* arr = new int[size];
        for(i = 0; i < size; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        i = 0;
        int count = 0;
        while(i < size && k >= 0) {
            if(arr[i] != count) {
                count += arr[i] - count;
                k -= arr[i] - count;
            } else {
               count++;
            }
            i++;
        }
        count += k;
        cout << count << endl; 
    }
    return 0;
}
