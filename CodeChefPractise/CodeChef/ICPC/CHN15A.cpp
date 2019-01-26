#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k, count = 0;
        cin >> n >> k;
        int* arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin >>  arr[i];
            arr[i] += k;
            if(arr[i] % 7 == 0) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
