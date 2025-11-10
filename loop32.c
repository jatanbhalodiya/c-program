#include<stdio.h>
int main() {
    int num,i,count=0,flag;
    
    for (num=2;num<=500;num++){
        flag=0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        count++;
       

    }
    printf("total prime numbers between 1 and 500= %d\n",count);
    return 0;
}