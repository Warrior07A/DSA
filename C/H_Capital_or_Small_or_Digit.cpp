#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    if ( c>='A' && c<='Z'){
        printf("ALPHA\nIS CAPITAL");
    }
    else if (c >='0' && c<='9'){
        printf("IS DIGIT");
    }
    else{
        printf("ALPHA \nIS SMALL");
    }
}