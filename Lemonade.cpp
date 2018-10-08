#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        int num1, num2;
        cin >> num2 >> num1;
        int* turns = new int[num1];
        int** rooms = new int*[num2];
        int* sizes = new int[num2];
        for(int i = 0; i < num1; i++) {
            cin >> turns[i];
        }
        for(int i = 0; i < num2; i++) {
            int size;
            cin >> size;
            sizes[i] = size;
            rooms[i] = new int[size];
            for(int j = 0; j < size; j++) {
                cin >> rooms[i][j];
            }
            sort(rooms[i], rooms[i] + size);
        }
        int ans = 0;
        for(int i = 0; i < num1; i++) {
            if(sizes[turns[i]] > 0) {
                ans += rooms[turns[i]][sizes[turns[i]] - 1];
                sizes[turns[i]]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
