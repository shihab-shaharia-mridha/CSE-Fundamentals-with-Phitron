#include <stdio.h>

int main(){
   int arr[5] = {1 , 2 , 4, 5   };
   
   int size = 4 ;
   int pos = 2;
   int valu = 3;

   for(int i=size; i > pos; i--){
      arr[i] = arr[i - 1];

   }

   arr[pos] = valu;

   for(int i = 0; i<5; i++){
      printf("%d", arr[i]);
   }

}