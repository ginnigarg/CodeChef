#include <iostream>
#include <algorithm>
using namespace std;

int maxSum(vector < vector<int> > vect) {
    






}


int main() {
    int n, x;
    cin >> n;
    vector< vector<int> > vect;
    for(int i = 0; i < 2; i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++) {
            cin >> x;
            temp.push_back(x);
        }
        vect.push_back(temp);
    } 
    cout << maxSum(vect) << endl;






}
