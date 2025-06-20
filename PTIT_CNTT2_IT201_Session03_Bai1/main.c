#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    printf("nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("So luong phan tu khong duoc am\n");
        return 1;
    } else if (n == 0) {
        printf("So luong phan tu phai lon hon 0\n");
        return 1;
    }
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d :%d\n ", i, arr[i]);
    }
    free(arr);
    return 0;
}
