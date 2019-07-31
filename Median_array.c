#include<stdio.h>
#include<conio.h>
 int main()
{
	int n,t,l=0,i=0,m,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	m=a[(n-1)/2];
	printf("%d",m);
	
	return 0;
}
