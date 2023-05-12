#include <iostream>

using namespace std;

int main()
{
    int(x);
    scanf("%d",&x);
    switch(x % 5){
        case 0:
            printf("you are A Team");
        break;
        case 1:
            printf("you are B Team");
        break;
        case 2:
            printf("you are C Team");
        break;
        case 3:
            printf("you are D Team");
        break;
        case 4:
            printf("you are E Team");
        break;
    }
    return 0;
}
