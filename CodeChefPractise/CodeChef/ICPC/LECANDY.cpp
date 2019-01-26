#include <iostream>
#define ll long long int
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        ll n, c, sum = 0;
        cin >> n >> c;
        ll* arr = new ll[n];
        for(int i = 0; i < n; i++) {
            cin >>  arr[i];
            sum += arr[i];
        }
        if(sum <= c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl; 
    }
    return 0;
}
