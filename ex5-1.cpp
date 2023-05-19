#include <iostream>

using namespace std;

int main()
{
    int x;
    printf("分數?? \n"); 
    scanf("%d",&x);         //詢問分數
     if (x<=100 && x>=0)    //分數應介於0~100
        if (x>=90)          //90~100 ==>A
            printf("A");
        else if (x>=80)     //80~90  ==>B
            printf("B");
        else if (x>=70)     //70~80  ==>C
            printf("C");
        else if (x>=60)     //60~70  ==>D
            printf("D");
        else                //不滿60 ==>E
            printf("E");
    else                    //分數不合理
        printf("請重新輸入分數，100<=分數<=0");
    return 0;
}
