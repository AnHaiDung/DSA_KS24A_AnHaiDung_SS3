#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
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
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("max: %d\n", max);
    free(arr);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}