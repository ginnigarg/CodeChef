// https://www.codechef.com/problems/TILE

#include <iostream>
using namespace std;

void multiply(int mat1[][N], int mat2[][N], int res[][N]) { 
    int i, j, k; 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
            res[i][j] = 0; 
            for (k = 0; k < N; k++) 
                res[i][j] += mat1[i][k] * mat2[k][j]; 
        } 
    } 
}

int main() {
    int tc;
    cin >> tc;
    int dp[2][2] = {{0, 1}, {1, 1}};
    while(tc--) {
        int n;
        cin >> n;
        int 
        cout << dp[n - 1]  % 1000000007 << endl;
    }
    return 0;
}
