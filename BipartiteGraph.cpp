#include<iostream>
#include<cmath>
#define ll unsigned long long int
#define mod 1000000007
using namespace std;

ll power(ll p, ll num) {
    if(num == 1) {
        return p;
    }
    ll x = power(p, num / 2);
    if(num % 2 == 0) {
        return x * x;
     }
    else return x * x * p;
}

int main() {
	int tc;
	cin >> tc;
	ll** arr = new ll*[2501];
	for(int i = 1; i <= 2500; i++) {
		*(arr + i) = new ll[2501];
	}
	for(int i = 1; i <= 2500; i++) {
		arr[1][i] = 1;
	}
	for(int i = 1; i <= 2500; i++) {
		arr[i][1] = 1;
	}
	for(int i = 2; i <= 2500; i++) {
		for(int j = 2; j <= 2500; j++) {
			arr[i][j] = (((((ll)power(2, j) - 1) * arr[i - 1][j]) % mod) + (((((ll)power(2, i) - 1) * arr[i][j - 1]) % mod) - 1) % mod);
		}
	}
	while(tc--) {
		int n, m;
		cin >> n >> m;
		cout << arr[n][m] << endl;
	}
	return 0;
}
