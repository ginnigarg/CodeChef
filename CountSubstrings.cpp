// https://www.codechef.com/problems/CSUB

#include <iostream>
using namespace std;

unsigned long long int countOnes() {
    int num;
    char c;
    cin >> num;
    unsigned long long int count = 0;
    while(num--) {
        cin >> c;
        if(c == '1') {
            count++;
        }
    }
    return count;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        unsigned long long int count = countOnes();
        count = (count * (count + 1)) / 2;
        cout << count << endl;
    }
    return 0;
}
