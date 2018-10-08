#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(int* arr, int start, int end, int num) {
    if(start > end) {
        return -1;
    }
    int mid = (start + end) / 2;
    if(arr[mid] == num) return mid;
    if(arr[mid] > num) return binarySearch(arr, start, mid - 1, num);
    if(arr[mid] < num) return binarySearch(arr, mid + 1, end, num);
}

int main() {
    int n, m;
    cin >> n >> m;
    int* specialFriends = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> specialFriends[i];
    }
    sort(specialFriends, specialFriends + n);
    vector < pair < bool, pair <int, string> > > vect;
    for(int i = 0; i < m; i++) {
        int f, popular;
        string s;
        cin >> f >> popular >> s;
        pair < bool, pair <int, string> > p;
        if(binarySearch(specialFriends, 0, n - 1, f) == -1) {           
            p.first = false;
        } else {
            p.first = true;
        }
        p.second.first = popular;
        p.second.second = s;
        vect.push_back(p);
    }
    sort(vect.begin(), vect.end());
    for(int i = vect.size() - 1; i >= 0 ; i--) {
        cout << vect[i].second.second << endl;
    }
    return 0;
}
