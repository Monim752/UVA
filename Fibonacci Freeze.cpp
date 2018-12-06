#include<bits/stdc++.h>
using namespace std;
#define MAXX 5002
#define LL long long

LL dp[MAXX];
int mod;
void fibo()
{
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<MAXX; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
        if(dp[i]>=10)
        {
            dp[i]+=dp[i]/10;
            dp[i]%=10;
        }
    }
}
int main()
{
    int n,i;
    fibo();
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1002-1; i>0; i--)
        {
            if(dp[i]!=0)break;
        }
        printf("The Fibonacci number for %d is ",n);
        for(; i>=0; i--)
        {
            printf("%lld",dp[n]);
        }
        printf("\n");
    }
    return 0;
}
