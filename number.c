#include <stdio.h>
int main ()
{int a;
printf("enter the no.");
scanf("%d",&a);
if(a%2==0){
    printf("%d is a even no.",a);
}else{
    printf("%d is odd no.",a);
}
return 0;
}