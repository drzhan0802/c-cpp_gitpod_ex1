#include <stdio.h>

int main()
{
    int *i,ii,cc;
    ii = 3;
    i = &ii;
    int a[4]={2,4,6,8};
    printf(" *i = %d \n", *i);
    printf(" &ii = %x \n",&ii );
    printf(" i = %x \n", i);
    printf("\nHello World\n");
    for(cc=0;cc<4;cc++){
        printf("%d:%x\n",cc,&cc[i]);
    }
    
    return 0;
}
