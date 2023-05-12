#include <iostream>

using namespace std;

int main()
{
    int x,y;
    printf("年份 \n");   //詢問年份
    scanf("%d",&x);
    printf("月份 \n");   //詢問月份
    scanf("%d",&y);
    if( x % 4 == 0){     //判斷年份是否為閏年
        printf("此年為閏年 \n");
        if(y == 2)       //判斷月份是否為2月
            printf("此月天數為 29 \n");
        else if(y % 2 ==0)
            printf("此月天數為 31 \n");
        else
            printf("此月天數為 30 \n");
    }
    else{
        printf("此年為平年 \n");
        if(y == 2)
            printf("此月天數為 28 \n");
        else if(y % 2 == 0)
            printf("此月天數為 31 \n");
        else
            printf("此月天數為 30 \n");
    }
    return 0;
}
