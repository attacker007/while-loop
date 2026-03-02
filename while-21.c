#include<stdio.h>
int main(){
    int a,b,e=0;
    int count=0,c=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        if(b>20){
            count++;
            c++;
            
            if(c>e){
                e=c;
            }
        }
        else{
            c=0;
        }
        a--;
    }
    printf("congestion minutes:%d\n",count);
    printf("longest congestion streak:%d",e);
    return 0;
}
