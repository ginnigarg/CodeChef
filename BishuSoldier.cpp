// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    int queries;
    cin >> queries;
    while(queries--) {
        int q, sum = 0;
        cin >> q;
        int ub = (upper_bound(arr, arr + size, q) - arr);
        for(int i = 0; i < ub; i++) {
            sum += arr[i];
        }
        cout << ub << " " << sum << endl;
    }
    return 0;
}

