#include <stdio.h>
int main() {
    int a[10], freq[100] = {0}, i;
    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    printf("Frequencies:\n");
    for(i = 0; i < 100; i++)
        if(freq[i] > 0)
            printf("%d occurs %d times\n", i, freq[i]);
    return 0;
}
