#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define MAXX 1002
LL dp[MAXX][MAXX];
LL Comb(int N, int M)
{
    if(dp[N][M]!=-1)return dp[N][M];
    if(N==M)return dp[N][M]=1;
    if(M==0)return dp[N][M]=1;
    return dp[N][M]=Comb(N-1, M-1)+Comb(N-1, M);
}
int main()
{
    int N,M;
    long long res;
    memset(dp, -1, sizeof(dp));
    while(scanf("%d%d",&N,&M)!=EOF)
    {
        if(N==0 && M==0)break;
        cout<<N<<" things taken "<<M<<" at a time is "<<Comb(N,M)<<" exactly."<<endl;
    }
    return 0;
}
