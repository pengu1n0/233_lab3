#include<stdio.h>
int main()
{
	int n,i,j,max=0,sum;
	scanf("%d" ,&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			b[i]+=b[i+1];
		}
		if(b[i]>max)
		{
			max=b[i];
			sum=i+1;
		}
	}
	printf("%d %d",sum,max);
	return 0;
}
