#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int size;
        cin >> size;
        int* arr = new int[size];
        for(int i  = 0; i < size; i++) {
            cin >> arr[i];      
        }
        bool flag1 = true, flag2 = false;
        int temp = 1;
        if(arr[0] == 1 && arr[size - 1] == 1) {
            for(int i = 1; i < size; i++) {
                if(arr[i] == temp) {
                    continue;
                }

                if(flag2 == true) {
                    if(arr[i] == temp - 1) {
                        temp = temp - 1;
                        continue;
                    }
                } else {
                    if(arr[i] == temp + 1) {
                        temp = temp + 1;
                        if(temp == 7) {
                            flag2 = true;
                        }
                        continue;
                    }
                }

                flag1 = false;
                break;
            }

       } else {
           flag1 = false;
       }
       
       if(flag1 && flag2) {
           cout << "yes" << endl;
       } else {
           cout << "no" << endl;
       }
    }
    return 0;
}
