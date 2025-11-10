#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float avg;
};

int main() {
    struct Cricketer c[10], temp;
    int i, j;

    for(i = 0; i < 10; i++) {
        printf("\nEnter details of cricketer %d:\n", i + 1);
        printf("Name: "); scanf("%s", c[i].name);
        printf("Age: "); scanf("%d", &c[i].age);
        printf("Matches Played: "); scanf("%d", &c[i].matches);
        printf("Average Runs: "); scanf("%f", &c[i].avg);
    }

    // Sort by average runs (ascending)
    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(c[i].avg > c[j].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers Sorted by Average Runs:\n");
    for(i = 0; i < 10; i++) {
        printf("%s\tAge: %d\tMatches: %d\tAvg: %.2f\n", c[i].name, c[i].age, c[i].matches, c[i].avg);
    }

    return 0;
}
