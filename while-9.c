#include<stdio.h>
int main(){
    int fuel,n,trips,sum=0,count=0;
    scanf("%d",&fuel);
    scanf("%d",&n);
    sum=fuel;
    while(n>0){
        scanf("%d",&trips);
        if(sum>=trips){
            sum-=trips;
            count++;
        }else{
            break;
        }
        n--;
    }
    printf("completed trips:%d\n",count);
    printf("remaining fuel:%d\n",sum);
    return 0;
}
