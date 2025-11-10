#include<stdio.h>
int main (){
    int i,num;
    printf("enter the number:");
    scanf("%d",&num);
    printf("factors of %d are:",num);
    for(i=1;i<=num;i++) {
        if(num%i==0){
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}