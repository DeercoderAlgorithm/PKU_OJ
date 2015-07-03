#include<stdio.h>
#define PI 3.1415926
#define MAX 10
int get_year(float R)
{
	int i=0;
	double area=PI*R*R/2;
	int sum; //待估计的每年丢失的面积
	while((sum=i*50)<=area)
	{
		i++;
	}
	return i;
}
int main()
{
	float a,b,max;
	int N,i;
	int c[MAX];
//	printf("请输入个数N\n");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%f%f",&a,&b);  //本来用到引号中有分号，那么就读不进去第二数了。
        max=a>b?a:b;
		c[i]=get_year(max);
	}
	for(i=0;i<N;i++)
	{
		printf("Property %d:This property will begin eroding in year %d.\n",i+1,c[i]);
	}
	printf("END OF OUTPUT.\n");
	return 0;
}