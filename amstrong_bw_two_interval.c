#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,i,t=0,s=0,c,r,n,t2;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        t=i;
        t2=i;
        while(t2!=0)
        {
        	t2/=10;
        	n++;
        }
        while(t!=0)
        {
            r=t%10;
            c=pow(r,n);
            s=s+c;
            t=t/10;
            
        }
        if(s==i)
        {
            printf("%d ",s);
        }
        n=0;
        s=0;
    }

    return 0;
}
