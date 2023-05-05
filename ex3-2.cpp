#include <iostream>
using namespace std;
int main()
{
    int a,b;  //宣告，表示我要使用變數
    
    scanf("%d",&a);
    scanf("%d",&b);
    printf(" a + b = %d \n",a + b );
    a = 5;
    printf("%d \n",a);
    a += 3;
    printf("%d \n",a);
    a -= 3;
    printf("%d \n",a);
    a *= 3;
    printf("%d \n",a);
    a /= 3;
    printf("%d \n",a);
    a %= 3;
    printf("%d \n",a);
    return 0;
    // =   x = 5   x = 5
    // +=  x += 3  x = x + 3
    // -=  x -= 3  x = x - 3
    // *=  x *= 3  x = x * 3
    // /=  x /= 3  x = x / 3
    // %=  x %= 3  x = x % 3
}
