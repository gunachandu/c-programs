#include <stdio.h>

int main()
{
    int i,j,n,m,sum=0,sum1=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            sum1=sum1+i;
        }
    }
    printf("%d",sum1);
    if(sum==m&&sum1==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("not amicable");
    }
    return 0;
}
