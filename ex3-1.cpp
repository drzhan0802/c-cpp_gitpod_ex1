#include <iostream>
using namespace std;

int main()
{
    int   i,j;
    scanf("%d",&i);
    scanf("%d",&j);
    printf(" i + j = %d \n",i + j );
    printf(" i - j = %d \n",i - j );
    printf(" i * j = %d \n",i * j );
    printf(" i / j = %d \n",i / j );
    printf(" i mod j = %d \n",i % j );
    ++i;
    printf("%d \n",i);
    i++;
    printf("%d \n",i);
    --i;
    printf("%d \n",i);
    i--;
    printf("%d \n",i);
    i = 16;  //十進位 二進位
             //     0001 0000
             // 0   0000 0000
             // 1   0000 0001
             // 2   0000 0010
             // 3   0000 0011
             // 4   0000 0100
             // 5   0000 0101
             // 6   0000 0110
             // 7   0000 0111
             // 8   0000 1000
             // 9   0000 1001
             // 10  0000 1010
             // 11  0000 1011
             // 12  0000 1100
             // 13  0000 1101
             // 14  0000 1110
             // 15  0000 1111
             // 16  0001 0000
             // 17  0001 0001
             // 18  0001 0010
             // 19  0001 0011
             // 20  0001 0100
             // 21  0001 0101
             // 22  0001 0110
             // 23  0001 0111
             // 24  0001 1000
             // 25  0001 1001
             // 26  0001 1010
             // 27  0001 1011
             // 28  0001 1100
             // 29  0001 1101
             // 30  0001 1110
             // 31  0001 1111
             // 32  0010 0000
    printf("%d \n",i);
    i = i >> 1; //砍掉一個bit
                // 16  0001 0000
                //     0000 1000  ==>  8
    printf("%d \n",i);
    i = i >> 2; //砍掉兩個bit
                // 8   0000 1000
                //     0000 0010  ==>  2
    printf("%d \n",i);
    i = i << 1; //增加一個bit
                // 2   0000 0010
                //     0000 0100  ==>  4
    printf("%d \n",i);
    return 0;
}
