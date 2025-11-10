#include<stdio.h>
int main() {
    int i ;
    float num,largest ,smallest;
    printf("enter number 1:");
    scanf("%f",&num);
    largest = smallest = num;
    for(i=2;i<=100;i++){
        printf("enter number%d:",i);
        scanf("%f",&num);
        if(num>largest)
        largest =num;
        if(num<smallest)
        smallest=num;

    }
printf("\nlargest number=%.2f",largest);
printf("\nsmallest number =%.2f\n",smallest);
return 0;
}