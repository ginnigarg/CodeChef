#include <iostream>
#define ll long long int
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        ll n, count = 0, ans;
        cin >> n;
        char ch;
        for(int i = 0; i < n; i++) {
            cin >> ch;
            if(ch == '1')
                count++;
        }
        ans = ((count) * (count + 1)) / 2;
        cout << ans << endl;
    }
    return 0;
}
