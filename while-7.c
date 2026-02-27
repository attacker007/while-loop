#include<stdio.h>
int main(){
    int capacity,n,beds,sum=0,count=0;
    scanf("%d",&capacity);
    scanf("%d",&n);
    int critical=(capacity*90/100);
    while(n>0){
        scanf("%d",&beds);
        sum+=beds;
        if(sum>critical)
        count++;
        n--;
    }
    printf(" final occpied beds:%d\n",sum);
    printf("critical hours:%d",count);
    return 0;
}
