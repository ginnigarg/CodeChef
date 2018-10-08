#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, m;
        cin >> n >> m;
        int* arr = new int[n];
        vector< pair< int, int > > vect;
        pair<int, int> p;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < k; i++) {
            cin >> p.first;
            cin >> p.second;
            vect.push_back(p);
        }
        sort(vect.begin(), vect.end());
        int* bounds = new int[n];
        for(int i = 0; i < vect.size(); i++) {
            bounds[vect[i].first] += 1;
            bounds[vect[i].second] -= 1;
        }
        int sum = 0, flag = 1, count = -1;
        for(int i = 0; i < n; i++) {
            sum += bounds[i];
            if(sum <= 0) {
                if(arr[i] != (i + 1)) {
                    flag = 0;
                    break;
                }
            } else if(sum == 1 && count != -1){
                count = i;
            }
        }
    }



}
