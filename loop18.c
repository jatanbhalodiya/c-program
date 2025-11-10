#include <stdio.h>

int main() {
    char sex;
    int boys = 0, girls = 0, i;

    printf("Enter sex code for 50 students (B for Boy, G for Girl):\n");

    for (i = 1; i <= 50; i++) {
        printf("Student %d: ", i);
        scanf(" %c", &sex);  // space before %c to skip newline/space

        if (sex == 'B' || sex == 'b')
            boys++;
        else if (sex == 'G' || sex == 'g')
            girls++;
        else
            printf("Invalid input! Please enter B or G.\n");
    }

    printf("\nTotal Boys: %d", boys);
    printf("\nTotal Girls: %d\n", girls);

    return 0;
}