#include <iostream>
#include <climits>
#define ll unsigned long long int
using namespace std;

bool check(ll num) {
    ll temp = 2 * num;
    int sum1 = 0, sum2 = 0;
    while(temp) {
        sum1 += temp % 10;
        temp /= 10;
    }
    while(num) {
        sum2 += num % 10;
        num /= 10;
    }
    if(sum1 == 110 && sum2 == 100) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ll num = 999999999;
    while(num < ULONG_MAX) {
        if(num == 1)  break;
        if(check(num) == true)  cout << num << endl;
        num++;
    }
}
