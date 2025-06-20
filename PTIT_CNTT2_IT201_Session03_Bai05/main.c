#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    int cols;
    int **arr;
    int main = 0;
    int extra = 0;
    printf("nhap so hang: ");
    scanf("%d", &rows);
    printf("nhap so cot: ");
    scanf("%d", &cols);
    if (cols < 0) {
        printf("so cot hop le\n");
    }else if (rows  < 0) {
        printf("so hang khong hop le\n");
    }else if (rows <= 0 || cols <= 0) {
        printf("so cot va hang khong khong hop le\n");
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
    for (int i = 0; i < rows; i++) {
        main = main + arr[i][i];
        if (rows == cols) {
            extra = extra + arr[i][rows - 1 -i];
        }
    }
    printf("Tong duong cheo chinh = %d\n",main);
    if (rows == cols) {
        printf("Tong duong cheo phu = %d",extra);
    }else {
        printf("Khong ton tai duong cheo phu");
    }
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}
