#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
    return (num1 > num2 ? num1 : num2);
}

int min(int num1, int num2) {
    return (num1 >= num2 ? num2 : num1);
}

int secMax(int* arr, int size) {
    int max1 = max(arr[0], arr[1]);
    int max2 = min(arr[0], arr[1]);

    for(int i = 2; i < size; i++) {
        if(max(arr[i], max1) == max1) {
            if(max(arr[i], max2) == arr[i]) {
                max2 = arr[i];
            }
        } else {
            max2 = max1;
            max1 = arr[i];
        }
    }



}

int main() {

}
