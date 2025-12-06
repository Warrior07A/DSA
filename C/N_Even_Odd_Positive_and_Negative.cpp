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
        if (arr[i] > 0) pos++;
        if (arr[i] < 0) neg++;
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);

}