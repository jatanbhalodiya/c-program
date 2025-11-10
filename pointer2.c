#include <stdio.h>

int main() {
    int a[4][4], arr[16], i, j, k = 0, temp;

    printf("Enter elements of 4x4 matrix:\n");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    // Copy elements into 1D array
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            arr[k++] = a[i][j];

    // Sort array
    for(i = 0; i < 16; i++)
        for(j = i + 1; j < 16; j++)
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

    printf("Sorted 1D array:\n");
    for(i = 0; i < 16; i++)
        printf("%d ", arr[i]);

    return 0;
}
