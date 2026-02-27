#include<stdio.h>
int main(){
    int week,rs,count=0;
    scanf("%d",&week);
    while(week>0){
        scanf("%d",&rs);
        if(rs==0)
        count++;
        week--;
    }
    printf("inactive week:%d\n",count);
    if(count>=3){
        printf("risk status:high");
    }
    else{
        printf("low");
        return 0;
    }
}
