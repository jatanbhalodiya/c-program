#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float phy, math, chem, total;
};

int main() {
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter marks in Physics, Maths, Chemistry: ");
    scanf("%f %f %f", &s.phy, &s.math, &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\nName: %s\nPhysics: %.2f\nMaths: %.2f\nChemistry: %.2f\nTotal: %.2f\n",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);

    return 0;
}
