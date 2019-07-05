#include <stdio.h>
#include <math.h>

int main()
{
    int a=0,r=0,s=0,c=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        r=a%10;
        c=pow(r,3);
        s+=c;
        a/=10;
    }
    if(t==s)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
