#include <iostream>
using namespace std;
int main()
{
    int x,y;
    int bool_value;
    
    x = 3; 
    y = 4;
    
    bool_value = ( x ==  y );
    printf(" x = y ==> %d \n",bool_value);
    bool_value = ( x != y );
    printf(" x != y ==> %d \n",bool_value);
    bool_value = ( x >  y );
    printf(" x > y ==> %d \n",bool_value);
    bool_value = ( x <  y );
    printf(" x < y ==> %d \n",bool_value);
    bool_value = ( x >= y );
    printf(" x >= y ==> %d \n",bool_value);
    bool_value = ( x <= y );
    printf(" x <= y ==> %d \n",bool_value);
    bool_value = ( x<5 && y<10 );  // && and
    printf(" x<5 && y<10 ==> %d \n",bool_value);
    bool_value = ( x<5 || y<10 );       // || or
    printf(" x<5 || y<10 ==> %d \n",bool_value);
    bool_value = !(( x<5 && y<10 ));    // !  not
    printf(" !(( x<5 && y<10 )) ==> %d \n",bool_value);
    return 0;
}
