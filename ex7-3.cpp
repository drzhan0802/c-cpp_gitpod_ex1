#include <iostream>
using namespace std;
int main(){
    int a[5],i;
    for(i=0;i<5;i++){
        a[i] = i*20;
        printf("a[%d] = %d\n",i,a[i]);
    }

    return 0;
}
