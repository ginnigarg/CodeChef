// https://www.codechef.com/problems/FORESTGA

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long int binarySearch(vector< pair <unsigned long long int, unsigned long long int> > vect, unsigned long long int start, unsigned long long int end, unsigned long long int w, unsigned long long int l) {
    if(start >= end) {
        return start;
    }
    unsigned long long int mid = start + (end - start) / 2;
    unsigned long long int sum = 0;
    for(int i = 0; i < vect.size(); i++) {
        unsigned long long int temp = vect[i].first + (vect[i].second * mid);
        if(temp >= l) {
            sum += temp;
        }
        if(sum >= w) return binarySearch(vect, start, mid, w, l);
    }
    if(sum >= w) return binarySearch(vect, start, mid, w, l);
    return binarySearch(vect, mid + 1, end, w, l);
}

int main() {
    int n;
    unsigned long long int w, l;
    cin >> n >> w >> l;
    pair<unsigned long long int, unsigned long long int> p;
    vector < pair< unsigned long long int, unsigned long long int > > vect;
    for(int i = 0; i < n; i++) {
        cin >> p.first;
        cin >> p.second;
        vect.push_back(p);
    }
    sort(vect.begin(), vect.end());
    cout << binarySearch(vect, 0, 1000000000000000000, w, l);
    return 0;
}
