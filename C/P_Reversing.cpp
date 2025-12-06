#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        int number;
        scanf("%d",&number);
        arr[i] = number;
        arr2[n-i-1] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }    
}