#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size, c, num;
        cin >> size >> c;
        int sum = 0;
        for(int i = 0; i < size; i++) {
            cin >> num;
            sum += num;
        }
        if(sum <= c) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
