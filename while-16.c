#include<stdio.h>
int main(){
    int a,b,c,d=0;
    int count=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        if(d<=a){
            count++;
        }
        if(d>a){
            break;
        }
        b--;
    }
    printf("people entered:%d\n",count);
    if(d>a){
        printf("overload status :yes");
    }
    else
    printf("overload status:no");
    return 0;
}
