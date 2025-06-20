#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    int cols;
    int **arr;
    int k=0;
    int sum =0;
    printf("nhap so hang: ");
    scanf("%d", &rows);
    printf("nhap so cot: ");
    scanf("%d", &cols);
    if (cols < 0 || cols > 1000) {
        printf("so cot khong hop le ");
    }else if (rows < 0 || rows > 1000) {
        printf("so hang khong hop le ");
    }else if (rows <= 0 || cols <= 0 || cols > 1000 || rows > 1000) {
        printf("so hang va cot khong hop le ");
    }
    arr = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *) malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("nhap phan tu arr[%d][%d]: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("nhap so hang muon tinh tong: ");
    scanf("%d", &k);
    if (k = 0 || k > rows) {
        printf("hang can tinh khong hop le ");
        return 1;
    }
    for (int i = 0; i < cols; i++) {
        sum = sum + arr[k-1][i];
    }
    printf("sum = %d\n ", sum);
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
