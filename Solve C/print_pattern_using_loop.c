#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;
    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(i < n && j < n){
                if(i < j) arr[i][j] = n - i;
                else arr[i][j] = n - j;
            }
            else if(i < n && j >= n){
                arr[i][j] = arr[i][2 * n - 2 - j];
            } else if(i >= n && j < n){
                arr[i][j] = arr[2 * n - 2 - i][j];
            }
            else {
                arr[i][j] = arr[2 * n - 2 - i][2 * n - 2 - j];
            }
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}