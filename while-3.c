#include<stdio.h>
int main(){
    int a,b,d,sum=0,diff=0,count=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(b>0){
        scanf("%d",&d);
        sum +=d;
        diff=a-sum;
        if(a>=sum)
        count++;
        if(sum>a)
        break;
        b--;
    }
    printf("days used:%d\n",count);
    if(sum>a)
    printf("remaining data:0GB");
    else
    printf("remaining data:%dGB",diff);
    return 0;
}
