#include <stdio.h>

int main()
{
	int a[2],b[2],c[2];
	scanf("%d %d %d %d",&a[0],&a[1],&b[0],&b[1]);
	c[0]=a[0]-b[0];
	c[1]=a[1]-b[1];
	printf("%d %d",abs(c[0]),abs(c[1]));
	return 0;
}
