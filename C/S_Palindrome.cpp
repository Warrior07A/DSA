#include<stdio.h>

int main(){
    char s[100000];
    scanf("%s",&s);
    int cnt = 0;
    int i =0 ;
    while(s[i])
    {
        cnt++;
        i++;
    }
    // printf("%d",cnt);
    int found = 1;
    for(int i=0;i<cnt;i++)
    {
        if (s[i] != s[cnt-i-1])
        {
            found  = 0;
        }
    }
    if (found) printf("YES");
    else printf("NO");
}