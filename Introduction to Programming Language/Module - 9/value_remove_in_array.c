#include <stdio.h>

int main(){
    
    int arr[5] = {6,4,7,8};
    int target = 1;
    int size = 4 ;

    // printf("%d",arr[4]);
    for (int i = target; i<size; i++){
        arr[i] = arr[i+1];
    }
    
    // printf("%d",arr[4]);
    for (int i = 0; i<size-1; i++){
        printf("%d", arr[i]);

    }
}