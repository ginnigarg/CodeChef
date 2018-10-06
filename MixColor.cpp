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
        for(int i = 0; i <  size; i++) {
            cin >> arr[i];
        }
        int count = 0;
        sort(arr, arr + size);
        for(int i = 1; i < size; i++) {
            if(arr[i] == arr[i -1]) {
                count++;
            } 
        }
        cout << count << endl;
    }
}
