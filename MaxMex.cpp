#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size, k;
        cin >> size >> k;
        int* arr = new int[size];
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + size);
        k = k - arr[0];
        for(int i = 0; i < size; i++) {
            

        }



    }




    return 0;
}
