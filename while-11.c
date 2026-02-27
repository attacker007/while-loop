#include<stdio.h>
int main(){
    int n,dh,count=0,sum=0;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&dh);
        sum+=dh;
        if(dh>2)
        count++;
        n--;
    }
    printf("total delay%d\n",sum);
    printf("delayed days%d\n",count);
}
