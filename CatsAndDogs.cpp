#include <iostream>
using namespace std;

bool check(int cats, int dogs, int legs) {
    int lb;
    if((2 * dogs) >= cats) {
        lb = (4 * dogs);
    } else {
        lb = (cats - (2 * dogs) * 4) - lb;
    }
    if((legs % 4) != 0 || ((cats + dogs) * 4) < legs || lb > legs) {
        return false;
    }
    return true;
}

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int cats, dogs, legs;
        cin >> cats >> dogs >> legs;
        if(check(cats, dogs, legs) == true) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}
