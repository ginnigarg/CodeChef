#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool traverse(pair<int, int>* arr, int x, int y, int n) {
    bool** positions = new bool*[3];
    for(int i = 0; i < 3; i++) {
        *(positions + i) = new bool[3];
        for(int j = 0;)
    }




}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, x, y;
        cin >> n;
        pair<int, int>* arr = new pair<int, int>[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i].first >> arr[i].second;
        }
        cin >> x >> y;
        if(traverse(arr, x, y, n) == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
