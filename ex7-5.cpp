#include <iostream>
using namespace std;
int main(){   //編寫一個程式,從4個整數中找出最小的數,並顯示此數。
    int a[4],i,x;
    scanf("%d",&a[i]);
    x=a[i];
    printf("a[%d] = %d\n",i,x);
    for(i=1;i<3;i++){
        scanf("%d",&a[i]);
        if(a[i]>x){
            printf("a[%d] = %d\n",i,x);
        }else{
            printf("a[%d] = %d\n",i,a[i]);
            x=a[i];
        }
    }

    return 0;
}
