#include<stdio.h>
int main(){
    int n,pw,count=0;
    scanf("%d",&n);
   int  max=0;
    while(n>0){
        scanf("%d",&pw);
        if(pw>max)
        max=pw;
        if(pw>5)
        count++;
        n--;
    
    }
    printf("total delay:%d\n",max);
    printf("surge hours:%d\n",count);
    return 0;
}
