#include<stdio.h>

int main(){
    char s[1000000];
    int sum = 0;
    scanf("%s",&s);
    int i = 0;
    while(s[i])
    {
        sum+= s[i]- '0';
        i++;
    }
    printf("%d",sum);
}