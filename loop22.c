#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);
    if( num==0)
    count=1;
    else{
        while (num!=0){
            num=num/10;
            count++;
        }
    }
    printf("total digits=%d\n",count);
    return 0;
}