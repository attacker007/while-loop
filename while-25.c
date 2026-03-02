#include<stdio.h>
int main(){
    int n,a,i=0,count=0,c=0,f=-1;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&a);
        if(a>=50000){
            count++;
            c++;
            if(c==3 && f==-1){
                f=i+1;
            }
        }
        else{
            c=0;
        }
        i++;
    }
    if(f!=1){
        printf("fraud triggered at attempt:%d\n",f);
    }
    else 
    printf("fraud triggered at attempt :not triggered\n");
    
    printf("high value transaction:%d\n",count);
    return 0;
}
    
