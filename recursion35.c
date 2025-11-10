#include <stdio.h>
void pattern35A(int i, int j) {
    if (i > 2) return;
    if (j > 3) {
        pattern35A(i + 1, 1);
        return;
    }
    printf("%d %d\n", i, j);
    pattern35A(i, j + 1);
}

void pattern35B(int i, int j) {
    if (i > 3) return;
    if (j > 3) {
        pattern35B(i + 1, 1);
        return;
    }
    printf("%d %d\n", i, j);
    pattern35B(i, j + 1);
}

void pattern35C(int i, int j, int k) {
    if (i > 2) return;
    if (j > 2) {
        pattern35C(i + 1, 1, 1);
        return;
    }
    if (k > 2) {
        pattern35C(i, j + 1, 1);
        return;
    }
    printf("%d %d %d\n", i, j, k);
    pattern35C(i, j, k + 1);
}

void pattern35D(int i, int j) {
    if (i < 3) return;
    if (j > 2) {
        pattern35D(i - 1, 1);
        return;
    }
    printf("%d %d\n", i, j);
    pattern35D(i, j + 1);
}

int main() {
    char choice;
    printf("Enter option for 35 (A/B/C/D): ");
    scanf(" %c", &choice);

    switch (choice) {
        case 'A': pattern35A(1, 1); break;
        case 'B': pattern35B(1, 1); break;
        case 'C': pattern35C(1, 1, 1); break;
        case 'D': pattern35D(5, 1); break;
        default:  printf("Invalid option!\n");
    }

    return 0;
}
