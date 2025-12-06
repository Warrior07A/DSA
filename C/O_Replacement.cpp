#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int odd= 0;
    int even =0;
    int pos = 0;
    int neg = 0;
    for(int i=0;i<n;i++)
    {
        int number;
        scanf("%d",&number);
        arr[i] = number;
        if (arr[i] > 0) arr[i] = 1;
        if (arr[i] < 0) arr[i] = 2;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }    
}