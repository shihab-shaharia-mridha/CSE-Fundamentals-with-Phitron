#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch >= '0' && ch<= '9'){
        printf("is digit");
    }

    else if(ch>='a' && ch<='z'){
        printf("ALPHA\n");
        printf("is Small");
    }

    
    else{
        printf("ALPHA\n");
        printf("is Capital");
    }

    
    
}