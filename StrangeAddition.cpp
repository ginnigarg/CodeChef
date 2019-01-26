#include <iostream>
using namespace std;

int countBits(int num) {
    int count = 0;
    while(num > 0) {
        if(num & 1)
            count++;
        num = num >> 1;
    }
    return count;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int a, b, c, bitsA = 0, bitsB = 0, count = 0;
        cin >> a >> b >> c;
        bitsA = countBits(a);
        bitsB = countBits(b);
        int minimum = ~(-1 << bitsA);
        int maximum = (-1 >> bitsA);
        for(int i = minimum; i <= maximum; i++) {
            int bit1 = countBits(i);
            if(bit1 > bitsA)
                break;
            if(bit1 < bitsA)
                continue;
            int temp = c - i;
            int bit2 = countBits(temp);
            if(bit2 )
            
        }



    }



}
