/*
#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j;  //宣告，表示我要使用變數
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    printf(" 平均 = %d \n",(a + b + c + d + e + f + g + h + i + j)/10);
    return 0;
}
*/

#include <iostream>
using namespace std;
int main(){    //從鍵盤上輸入10個數，求其平均值。
    int a[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        printf("a[%d] = %d\n",i,a[i]);
    }

    return 0;
}
