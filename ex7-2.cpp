#include <iostream>
using namespace std;
/*
    1=1
    2=1+2
    3=1+2+3
    f(n) = n + f(n-1)

*/
#if 0
int f(int n){
    if(n <= 0){
        return 0;
    }else{
        return n+f(n-1);
    }
}
#else
int f(int n){
    int val=0;
    int i;
    for(i=0;i<=n;i++){
        val = val + i;
    }
    return val;
}
#endif
int main()
{
    cout<<"sum = "<<f(1)<< endl;

    return 0;
}
