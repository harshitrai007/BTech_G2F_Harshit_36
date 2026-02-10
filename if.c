#include <stdio.h>

int main() {int  a;
    // Write C code here
    printf("enter a\n");
    scanf("%d",&a);
    if(a<0){a=a*(-1);}
    printf("\nAsolute value=%d",a);

    return 0;
}