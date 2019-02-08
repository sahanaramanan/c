#include<stdio.h>
int main()
{
    int K,N,sum=0,i;
    printf("Enter the num");
    scanf("%d",&K);
    printf("Enter the num");
    scanf("%d",&N);
    int a[5];
    for(i=1;i<=N;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=1;i<=K;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
