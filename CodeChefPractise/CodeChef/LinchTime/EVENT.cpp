#include <iostream>
#include <cmath>
using namespace std;

int getNumber(string str) {
        if(str == "saturday") return 1;
        else if(str == "sunday") return 2;
        else if(str == "monday") return 3;
        else if(str == "tuesday") return 4;
        else if(str == "wednesday") return 5;
        else if(str == "thursday") return 6;
        else return 7;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string s, e;
        cin >> s >> e;
        int l, r;
        cin >> l >> r;
        int i, j;
        i = getNumber(s);
        j = getNumber(e);
        int ans1 = abs(j - i) ;
        int ans2 = r - l;
        if(ans2 >= 7) {
            cout << "many" << endl;
            continue;
        }
        for(int i = 0; i < 100; i++) {
            cout << ans1 + (i * 7) << " " <<  ans1 << endl;
            if(l <=  (ans1 + (i * 7)) && r >= (ans1 + (i * 7))) {
                cout << (ans1 + (i * 7)) << endl;
                break;
            }
        }
        cout << "impossible" << endl;
        
    }
}
