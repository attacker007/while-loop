#include<stdio.h>
int main(){
    int a,b,c=0;
    int count=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        c=c+b;
        if(b>4){
            count++;
            
        }
        a--;
    }
    printf("total overtime:%d\n",c);
    printf("burnout days:%d\n",count);
    return 0;
}
