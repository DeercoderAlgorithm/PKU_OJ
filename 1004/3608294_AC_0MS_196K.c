#include<stdio.h>
void main()
{
	float a=0;
    float sum=0;
	int i;
	for(i=0;i<12;i++)
	{
		scanf("%f",&a);
		sum+=a;
	}
	printf("$%.2f",sum/12);
}
