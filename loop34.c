#include<stdio.h>
int main(){
    int n,i;
    int a=1,b=1,c;
    printf("enter how many number to print:");
    scanf("%d",&n);
    printf("Fibonacci series:");
    if(n>=1)
    printf("%d",a);
    if(n>=2)
    printf("%d",b);
    for (i=3;i<=n;i++){
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    printf("\n");

    return 0;
}