#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, pos = 3;
    int i;

    for(i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}