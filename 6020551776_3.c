#include<stdio.h>
int main()
{
	int ans=2,n;
	scanf("%d",&n);
	while(n>1)
	{
		while(n%ans!=0)
		{
			ans++;
		}
		n=n/ans;
		printf("%d\n",ans);
		ans=2;
	}
	printf("0");
	return 0;
}
