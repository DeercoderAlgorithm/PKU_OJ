#include<stdio.h>
int main()
{
	float get,total;
	int a[10];
	int i,j=0,k;
	scanf("%f",&get);
	while(get!=0.0)
	{
       for(i=1,total=0.0;total<get;i++)
	   {
		   total+=(float)1/(i+1);
          if(total>get)
		  {
			  break;
		  }
	   }
       a[j]=i;
	   ++j;
       scanf("%f" ,&get);
	}
     for(k=0;k<j;k++)
	 {
		 printf("%d card(s)\n",a[k]);
	 }
	 return 0;
}