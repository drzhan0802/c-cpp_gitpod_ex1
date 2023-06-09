#include <iostream>
using namespace std;
int main(){    //從鍵盤輸入10個整數，統計其中正數、負數和零的個數，並在螢幕上輸出。
    int a[10],i,x=0,y=0,z=0;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        if(a[i]>0){
            x=x+1;
            printf("正數有 %d 個 零有 %d 個 負數有 %d 個\n",x,y,z);
        }else if(a[i]<0){
            z=z+1;
            printf("正數有 %d 個 零有 %d 個 負數有 %d 個\n",x,y,z);
        }else{
            y=y+1;
            printf("正數有 %d 個 零有 %d 個 負數有 %d 個\n",x,y,z);    
        }
        
    }

    return 0;
}
