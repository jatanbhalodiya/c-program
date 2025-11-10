#include<stdio.h>
int main(){
    int num,digit;
    printf("enter a number:");
    scanf("%d",&num);
    printf("seperated digits (in reverse order):\n");
    while (num>0){
        digit = num%10;
        printf("%d",digit);
        num=num/10;
    }
    return 0;
}