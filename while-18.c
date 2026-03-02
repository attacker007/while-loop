#include <stdio.h>

int main() {
    int a,b,c,d=0,i=0;
    scanf("%d\n%d",&a,&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        b--;
    }
    if(d>a){
        printf("treated patients:%d\n",a);
        printf("rejected patience:%d\n",d-a);
    }
    else{
        printf("threated patients:%d\n",d);
        printf("rejected patience",i);

    return 0;
}
}
