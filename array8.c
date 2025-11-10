#include <stdio.h>
int main() {
    int a[5], b[10], i, j = 0;
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 10; i++) {
        if(i % 2 == 0 && j < 5)
            b[i] = a[j++];
        else
            b[i] = 0;
    }

    printf("Copied array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", b[i]);

    return 0;
}
