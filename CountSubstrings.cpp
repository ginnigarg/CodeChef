#include <iostream>
using namespace std;

int countOnes() {
    int num;
    char c;
    cin >> num;
    int count = 0;
    while(num--) {
        cin >> c;
        if(c == '1') {
            count++;
        }
    }
    return count;
}

int fact(int num) {
    int fact = 1, it = 1;
    if(num == 0)  return 0;
    while(it <= num) {
        fact *= it;
        it++;
    }
    return fact;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int count = countOnes();
        count = fact(count - 1) + count;
        cout << count << endl;
    }
    return 0;
}
