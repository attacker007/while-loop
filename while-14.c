#include<stdio.h>
int main(){
    int atm,n,wa,sum=0,sums=0,count=0,rem;
    scanf("%d",&atm);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&wa);
        sum+=wa;
        if(sum<atm){
            sums+=wa;
            count++;
            
        }
        n--;
    }
    rem=atm-sums;
    printf("sucessful withdrawals:%d\n",count);
    printf("remaining cash:%d\n",rem);
}
