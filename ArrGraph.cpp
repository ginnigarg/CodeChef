#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    
    int tc;
    cin >> tc;
    while(tc--) {

        int n;
        cin >> n;
        int temp;
        int *arr = new int[n];
        int *conn = new int[n];
        int size = n;
        int maxi = -1;
        for(int i = 0; i < size; i++) {

            cin >> arr[i];
            maxi = max(maxi, arr[i]);
        }

        int i = 0;
        int count = 0;
        for(i = 0; i < size - 1; i++) {

            for(int j = i + 1; j < size; j++) {

                if(__gcd(arr[i], arr[j]) == 1) {

                    if(count == 0) {

                        count = 2;
                        conn[i] = conn[j] = 1;
                    }else {
                    
                        if(conn[i] && conn[j]) continue;

                        if(conn[j] == 1) {
                            conn[i] = 1;
                            count++;
                        }else if(conn[i] == 1) {
                        
                            conn[j] = 1;
                            count++;
                        }
                    }
                }
            }
        }
        if(count >= size) {

            cout << "0" << endl << arr[0];
            
            for(i = 1 ; i < n; i++) {

                cout << " " << arr[i];
            }
        } else {

            cout << "1" << endl;
            int f = 0;
            if(conn[0] == 0) {
            
                if(maxi != 47) cout << "47";
                else cout << "43";
                
                f = 1;
            }else cout << arr[0];
            
            for(i = 1; i < n; i++) {

                if(!f && conn[i] == 0) {
                    if(maxi != 47) cout << " 47";
                    else cout << " 43";
                    f = 1;
                }
                else cout << " " << arr[i];
            }
        }
        cout << endl;
    }
}

