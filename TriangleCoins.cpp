// https://www.codechef.com/problems/TRICOIN

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int binarySearch(int start, int end, int num) {
    if(1 >= (end - start)) {
        return start;
    }
    long long int mid = (start + end) / 2;
    if(((mid * (mid + 1)) / 2) == num) {
        return mid;
    } else if(((mid * (mid + 1)) / 2) > num) {
        return binarySearch(start, mid - 1, num);
    } else {
        return binarySearch(mid, end, num);
    }
}
int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int q;
        cin >> q;
        cout << binarySearch(1, (int)sqrt(2 * q) + 1, q) << endl;
    }
    return 0;
}
