#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,res;
    scanf("d",&t);
    while(t--)
    {
        for(int i=1; i<=t; i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if((a<b && a>c) || (a>b && a<c))
               res=a;
            if((b<a && b>c) || (b>a && b<c))
                res=b;
            if((c<b && c>a) || (c<a && c>b))
                res=c;
            printf("Case %d: %d\n",i,res);
        }
    }
    return 0;
}
