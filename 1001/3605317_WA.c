#include<stdio.h>
void main()
{
	float R;
	int i,n;
	double result=1;
	printf("input R and n\n");
	scanf("%f%d",&R,&n);
	for(i=0;i<n;i++)
	{
		result=result*R;
	}
	printf("%lf",result);
}