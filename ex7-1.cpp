#include <iostream>
using namespace std;
/*
    n! = n * (n-1) * (n-2) ......
    val = val * i
    
    f(n) = n * f(n-1)

*/
#if 0
int f(int n){
    if(n <= 1){
        return 1;
    }else{
        return n*f(n-1);
    }
}
#else
int f(int n){
    int val=1;
    int i;
    printf(" this is loop form \n");
    for(i=1;i<=n;i++){
        val = val * i;
    }
    return val;
}
#endif
int main()
{
    cout<<"5! = "<<f(5)<< endl;

    return 0;
}
