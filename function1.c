#include <stdio.h>
#include <math.h>

int power(int a, int b) {
    int i, result = 1;
    for(i = 1; i <= b; i++)
        result *= a;
    return result;
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    printf("%d raised to %d = %d", a, b, power(a, b));
    return 0;
}
