#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int min = a;
    if(b < min){
        min = b;
    
    }
    else if(c<min){
        min = c;
    }

    int max = a;

    if(b > max){
        max = b;
    }
    else if(c > max){
        max = c;
    }

    printf("%d %d", min,max);


    

   


}