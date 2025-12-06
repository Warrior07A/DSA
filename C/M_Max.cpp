#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    int max = -1;
    for(int i=0;i<a;i++)
    {
        int number;
        scanf("%d",&number);
        arr[i] = number;
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d",max);
    
}