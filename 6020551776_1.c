#include<stdio.h>
int main()
{
	int sum,i,j,n,max=0,ans=0;
	for(i=1;i<=5;i++)
	{
	    sum=0;  
		for(j=0;j<4;j++)
		{
		    scanf("%d" ,&n);
		    sum+=n;
		}
	    if(sum>max)
	    {
		  max=sum;
		  ans=i;
	    }
	}
	printf("%d %d\n" ,ans,sum);
	
	return 0;	
}
