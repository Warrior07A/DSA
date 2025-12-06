#include<stdio.h>

int main(){
    int n , m;
    scanf("%d %d", &n , &m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int number;
            scanf("%d",&number);
            arr[i][j] = number;
        }
    }
    int k;
    scanf("%d",&k);

    int found = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (arr[i][j] == k) {
                
                found = 1;
                break;
        }
        if(found) break;
        }
    }
    if (found) printf("will not take number");
    else printf("will take number");
}