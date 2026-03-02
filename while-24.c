#include<stdio.h>
int main(){
    int f,n,b,s=-1,w=0,i=1;
    scanf("%d",&f);
    scanf("%d",&n);
    while(i<=n){
        scanf("%d",&b);
        f-=b;
        if(f<0){
            s=i;
            w-=f;
            break;
        }
        i++;
    }
    if(s!=-1)
    printf("emergency stage:%d\n",s);
    else
    printf("emergency stage:not occured\n");
    printf("fuel wasted:%d\n",w);
}
