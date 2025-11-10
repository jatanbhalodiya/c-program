#include <stdio.h>
int main() {
    int a[10], n, num, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter number to insert: ");
    scanf("%d", &num);
    a[n] = num;
    n++;
    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
