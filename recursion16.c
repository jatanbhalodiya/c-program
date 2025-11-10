#include <stdio.h>
void find(int a[], int n, int *max, int *min) {
    if (n == 0) return;
    if (a[n - 1] > *max) *max = a[n - 1];
    if (a[n - 1] < *min) *min = a[n - 1];
    find(a, n - 1, max, min);
}
int main() {
    int a[100];
    for (int i = 0; i < 100; i++) scanf("%d", &a[i]);
    int max = a[0], min = a[0];
    find(a, 100, &max, &min);
    printf("Max=%d Min=%d", max, min);
    return 0;
}
