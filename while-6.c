#include<stdio.h>
int main(){
    int mw,n,pw,sum=0,max=0,count=0;
    scanf("%d",&mw);
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&pw);
        sum+=pw;
        if(sum<=max){
            count++;
        }
        n--;
        
    }
    if(sum<max)
    printf("overload:no\n");
    else
    printf("over load:yes\n");
    
    printf("passengers allowed:%d\n",count);
    return 0;
    
}
