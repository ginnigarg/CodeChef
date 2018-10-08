#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size;
        cin >> size;
        int* arr = new int[size];
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        int* freq = new int[2001];
        for(int i = 0; i < size; i++) {
            freq[arr[i] + 1000]++;
        }
        unsigned long long int ans = 0;
        for(int u = -1000; u < 1001; u++) {
            for(int v = u + 1; v < 1001; v++) {
                if((u + v) % 2 != 0) {
                    continue;
                }
                if(freq[(u + v + 2000) / 2] > 0)
                    ans += ((unsigned long long int)freq[u + 1000] * (unsigned long long int)freq[v + 1000]);
            } 
            ans += ((unsigned long long int)freq[u + 1000] * ((unsigned long long int)freq[u + 1000] - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
