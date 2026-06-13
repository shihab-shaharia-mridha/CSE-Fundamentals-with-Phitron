#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b==0){
        printf("multiple");
    }
    else if(b%a == 0){
        printf("multiple");
    }
    else{
        printf("no multiple");
    }

}