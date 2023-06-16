#include <stdio.h>
int main(){
    int *i,ii;
    int cc,arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    ii = 3;
    i = &ii;
    
    printf(" *i = %d \n", *i);
    printf(" &ii = %x \n",&ii ); 
    printf(" i = %x  ", i);
    printf("\nHello World\n");
    printf("number of elements:%lu \n", sizeof(arr) / sizeof(arr[0]));  
    ii = sizeof(arr) / sizeof(arr[0]);
    i = arr;  //陣列的名字去掉中括號，編譯器會視為指標
    for(cc=0;cc<ii;cc++){
        printf("%d:%d ",cc,*i);
        i++;  //每次加4個拜ㄊㄜ
    }
    printf("\n");
    i = arr;
    for(cc=0;cc<ii;cc++){
        printf("%d:%d ",cc,i[cc]);
    }
    printf("\n");
    return 0;
}
