#include <stdio.h>

int main()
{
    int arr [] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
    int i;
    printf("number of elements:%lu\n", sizeof(arr) / sizeof(arr[0]));  //個數
    for(i=0;i<11;i++){
    printf("%d\n",arr[i]);         //全部舉出來
    }
    return 0;
}
