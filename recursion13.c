#include <stdio.h>
int sum13(int n) {
    if (n > 100) return 0;
    if (n % 13 == 0)
        return n + sum13(n + 1);
    else
        return sum13(n + 1);
}
int main() {
    printf("Sum = %d", sum13(1));
    return 0;
}
