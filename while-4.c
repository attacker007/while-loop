#include<stdio.h>
int main(){
    int a,b,temp=0,count=0;
    scanf("%d",&a);
    while(a>0){
        scanf("%d",&b);
        if(b==0){
            count++;
             if(count>temp){
                 temp=count;
             }
        
            }else{
                count=0;
           }
         a--;
        
        
    }
    printf("longest failure streak:%d\n",temp);
    return 0;
}
