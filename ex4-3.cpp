#include <iostream>

using namespace std;

int main()
{
    int r;
    scanf("%d",&r);
    if( r >= 0){
        printf("面積 ==> %d \n",r*r*3);
        printf("周長 ==> %d \n",r*2*3);
    }else{
        printf("請輸入>=0的數字 \n");
    }
    return 0;
}
