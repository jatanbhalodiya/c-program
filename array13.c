#include <stdio.h>
int main() {
    int a[10], n, pos, num, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter position (0-%d): ", n);
    scanf("%d", &pos);
    printf("Enter number: ");
    scanf("%d", &num);

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = num;
    n++;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
