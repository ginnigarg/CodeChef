#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size, k;
        cin >> size >> k;
        int count = 0;
        int num;
        for(int i = 0; i < size; i++) {
            cin >> num;
            if((num + k) % 7 == 0) count++;
        }
        cout << count << endl;
    }
    return 0;
}
