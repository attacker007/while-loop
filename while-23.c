#include<stdio.h>
int main(){
    int a,b,aa=0;
    int count=0,c=0,l=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        c++;
        if(b>70){
            count++;
            aa++;
        }
        else{
            count=0;
        }
        if(count==3 && l==0){
            printf("break at reading:%d\n",c);
            l=1;
        }
        a--;
    }
    if(l==0){
        printf("breakdown at reading :not occured\n");
    }
    printf("unsafe reading:%d",aa);
    return 0;
}
