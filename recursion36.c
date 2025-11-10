#include <stdio.h>

void pattern36A(int i, int j) {
    if (i > 5) return;
    if (j > 5) {
        pattern36A(i + 1, 1);
        return;
    }
    if (i + j == 6)
        printf("%d %d\n", i, j);
    pattern36A(i, j + 1);
}

void pattern36B(int i, int j) {
    if (i > 3) return;
    if (j > 3) {
        pattern36B(i + 1, 1);
        return;
    }
    printf("%d %d\n", i, j);
    pattern36B(i, j + 1);
}

int main() {
    char choice;
    printf("Enter option for 36 (A/B): ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'A': pattern36A(1, 1); break;
        case 'B': pattern36B(1, 1); break;
        default:  printf("Invalid option!\n");
    }

    return 0;
}
