#include <stdio.h>

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
};

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int cnt = 5;
    reverse_array(arr, cnt);
    for (int i = 0; i < cnt; i++) {
        printf(" %i", arr[i]);
    }
    printf("\n");
}
