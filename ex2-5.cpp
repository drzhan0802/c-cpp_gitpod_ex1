#include <stdio.h>
int main(){
    int a, b;
    float c, d;
    printf("A=> ");
    scanf("%d", &a);
    printf("B=> ");
    scanf("%d", &b);
    printf("C=> ");
    scanf("%f", &c);
    printf("D=> ");
    scanf("%f", &d);
    printf("A+B=%d\n",a+b);
    printf("A-B=%d\n",a-b);
    printf("A*B=%d\n",a*b);
    printf("A/B=%d\n",a/b);
    printf("C+D=%f\n",c+d);
    printf("C-D=%f\n",c-d);
    printf("C*D=%f\n",c*d);
    printf("C/D=%f\n",c/d);
    return 0;
}
