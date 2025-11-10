#include <stdio.h>

int main() {

    printf("Series (A):\n");
    for (int i = 1, j = 5; i <= 5 && j >= 1; i++, j--) {
        printf("%d %d\n", i, j);
    }
    printf("\n");

    
    printf("Series (B):\n");
    for (int i = 1, j = 5; i <= 3 && j >= 3; i++, j--) {  
        printf("%d %d\n", i, j);  
        printf("%d %d\n", i, j);
    }

    printf("\n");
    return 0;
}
