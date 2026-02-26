#include<stdio.h>
int main(){
    int a,b,temp=0,count=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        if(b==0){
            temp++;
        }
        else if(b == 1){
            count++;
        }
        a--;
    }
    printf("successfull order:%d\n",count);
    printf("cancelled order:%d\n",temp);
    if(count>=temp)
    printf("status:safe");
    else
    printf("status:risk");
    return 0;
}
