#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    int i;
    *min = *max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] < *min)
            *min = arr[i];
        if(arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arr[10], n, i, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMinMax(arr, n, &min, &max);
    printf("Minimum = %d\nMaximum = %d", min, max);
    return 0;
}
