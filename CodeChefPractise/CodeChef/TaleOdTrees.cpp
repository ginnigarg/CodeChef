#include <iostream>
#include <algorithm>
using namespace std;

vector<int> arr1[1000001];
vector<int> arr2[1000001];
bool visited1[1000001];
bool visited2[1000001];


int heightTree(int root) {
    visited2[root] = true;
    for(int i = 0; i < arr2.size(); i++) {

    }
  
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int n1, n2;
        cin >> n1 >> n2;
        int temp;
        visited1[0] = false;
        visited2[0] = false;
        for(int i = 1; i < n1; i++) {
            cin >> temp;
            arr1[i].push_back(temp);
            arr1[temp].push_back(i);
            visited1[i] = false;
        }
        for(int i = 1; i < n2; i++) {
            cin >> temp;
            arr2[i].push_back(temp);
            arr2[temp].push_back(i);
            visited2[i] = false;
        }
        int height2 




    }




}
