#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size;
        cin >> size;
        vector< pair <int, int> > vect;
        for(int i = 0; i < size; i++) {
            int band, length;
            cin >> band >> length;
            pair <int, int> p;
            p.first = band;
            p.second = length;
            vect.push_back(p);
        }
        sort(vect.begin(), vect.end());
        vector<int> lengths;
        lengths.push_back(vect[0].second);
        vect[0].second = INT_MIN;
        for(int i = 1; i < size; i++) {
            if(vect[i].first != vect[i - 1].first) {
                lengths.push_back(vect[i].second);
                vect[i].second = INT_MIN;
            }
        } 
        long long int ans = 0;
        sort(lengths.begin(), lengths.end());
        for(int i = 1; i <= lengths.size(); i++) {
            ans += ((long long int)i * (long long int)lengths[i - 1]);
            //cout << lengths[i - 1] << endl;
        }
        for(int i = 0; i < vect.size(); i++) {
            if(vect[i].second != INT_MIN) {
                ans += ((long long int)lengths.size() * (long long int)vect[i].second);
                //cout << lengths.size() << endl;
            }
        }
        cout << ans << endl;
    }
}
