#include<stdio.h>
#include<math.h>
int main (){
    int num,square,temp,count=0,lastDigits;
    printf("enter a number:");
    scanf("%d",&num);
    square=num*num;
    temp=num;
    while(temp>0){
        count++;
        temp/=10;
    }
    lastDigits= square %(int)pow(10,count);
    if (lastDigits== num)
    printf("%d is an automorphic number.\n",num);
    else
    printf("%d is not an automorphic number.\n",num);
    return 0;

}