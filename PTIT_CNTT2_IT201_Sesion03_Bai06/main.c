#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *arr;
    int n;
    int m;
    printf("n = ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    printf("m = ");
    scanf("%d", &m);
    arr = (int *)realloc(arr, n+m*sizeof(int));
    for (int i = 0; i < m; i++) {
        printf("arr[%d] = ",i);
        scanf("%d", &arr[n+i]);
    }
    for (int i = 0; i < n+m; i++) {
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    free(arr);
    return 0;
}
