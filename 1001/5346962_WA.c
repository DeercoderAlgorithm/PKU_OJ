//求高精度的问题。北大1001题。
#include<stdio.h>
double calculate(float R,int n)
{
	int i;
	double total=1.0;
	for(i=0;i<n;i++)
	{
		total*=R;
	}
	return total;
}
int main()
{
	float R;
	int n,i;
	double a[6];
	for(i=0;i<6;i++)
	{
		scanf("%f %d",&R,&n);
		a[i]=calculate(R,n);
	}
	for(i=0;i<6;i++)
	{
		printf("%lf",a[i]);
                printf("\n");
	}
	return 0;

}