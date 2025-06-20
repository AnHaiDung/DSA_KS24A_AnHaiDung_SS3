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
        printf("nhap phan tu thu %d:", i);
        scanf("%d", &arr[i]);
    }
    int avg=0;
    int check =0;
    for (int i = 0; i < n; i++) {
       if (arr[i]%2==0) {
           avg+=arr[i];
           check++;
       }
    }
    avg = avg / check ;
    printf("average: %d ", avg);
    free(arr);
    return 0;
}