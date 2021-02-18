
#include<stdio.h>
int main()
{
    int i,n,a,b,sum[48]={0},max=0,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        sum[a-1]+=b;
    }
    for(i=0;i<48;i++)
    {
        if(max<sum[i])
        {
            max=sum[i];
            ans=i;
        }
    }
    printf("%d %d",ans+1,sum[ans]);
}
