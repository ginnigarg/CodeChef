// https://www.codechef.com/INOIPRAC/problems/INOI1601

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

bool* visited;
int* dp;
int* arr;
vector<int> a[100001];
int* p;

int dfs(int root) {
    visited[root] = true;
    int minimum = INT_MAX;
    for(int i = 0; i < a[root].size(); i++) {
        int v = a[root][i];
        if(visited[v] == true) {
            continue;
        }
        minimum = min(minimum, dfs(v));
    }
    dp[root] = arr[root] - minimum;
    return min(minimum, arr[root]);
}

int main() {
    int n;
    cin >> n;

    arr = new int[n + 1];
    p = new int[n + 1];
    dp = new int[n + 1];
    visited = new bool[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    int root = 0;
    for(int i = 1; i <= n; i++) {
        cin >> p[i];
        if(p[i] == -1) root = i;
        else  {
            a[p[i]].push_back(i);
            a[i].push_back(p[i]);
        }
    }

    dfs(root);
    int maximum = INT_MIN;
    for(int i = 1; i <= n; i++) {
        if(maximum < dp[i]) {
            maximum = dp[i];
        }
    }
    cout << maximum << endl;
    return 0;
}
