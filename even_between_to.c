#include <stdio.h>

int main()
{
    int a=0,b=0,i=0;
    scanf("%d %d",&a,&b);
    a++;
    for(i=a;i<b;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
