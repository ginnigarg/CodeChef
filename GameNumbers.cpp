#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n, k;
        cin >> n >> k;
        int* a = new int[n];
        int* d = new int[n];
        unsigned long long int* b = new unsigned long long int[k];
        unsigned long long int total_cards = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> d[i];
            total_cards += d[i];
        }
        for(int i = 0; i < k; i++) {
            cin >> b[i];
        }
        vector< pair< int, int > > vect;
        pair<int, int> p;
        for(int i = 0; i < n ; i++) {
            p.first = a[i];
            p.second = d[i];
            vect.push_back(p);
        }
        sort(vect.begin(), vect.end());
        int start = 0, end = n - 1;
        for(int i = 0; i < k; i++) {
            unsigned long long int cards_discarded = total_cards - b[i];
            if(i % 2 == 0) {
                while(total_cards > b[i]) {
                    if(vect[start].second > cards_discarded) {
                        vect[start].second -= cards_discarded;
                        total_cards = b[i];
                    } else if(vect[start].second == cards_discarded) {
                        total_cards = b[i];
                        start++;
                    } else {
                        cards_discarded -= vect[start].second;
                        start++;
                    }
                }
            } else {
                while(total_cards > b[i]) {
                    if(vect[end].second > cards_discarded) {
                        vect[end].second -= cards_discarded;
                        total_cards = b[i];
                    } else if(vect[end].second == cards_discarded) {
                        total_cards = b[i];
                        end--;
                    } else {
                        cards_discarded -= vect[end].second;
                        end--;
                    }
                }
            }
        }
        unsigned long long int ans = 0;
        for(int i = start; i <= end; i++) {
            ans += ((unsigned long long int)vect[i].first * (unsigned long long int)vect[i].second);
        }
        cout << ans << endl;
    }
    return 0;
}
