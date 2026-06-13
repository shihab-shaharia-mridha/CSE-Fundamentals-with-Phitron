#include<stdio.h>
int main(){

    float arr[5];
    int i = 0;
    int sum = 0;

    arr[0] = 15;
    arr[1] = 42;
    arr[2] = 7;
    arr[3] = 89;
    arr[4] = 23;

    for(i; i<= 4; i++){
         sum = sum + arr[i];

    }
    printf("%d",sum);



}