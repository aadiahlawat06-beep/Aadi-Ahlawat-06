#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40};
    int n = 4, pos = 2, value = 25;
    int i;

    for(i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}