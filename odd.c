#include <stdio.h>
#include <conio.h>

int main()
{
    int n,k,i=0;
    scanf("%d %d",&n,&k);
    n++;
    k--;
    for(i=n;i<=k;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
