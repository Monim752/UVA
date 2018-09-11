#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,a,b;
    scanf("%d",&n);
    while(n!=0)
    {
        scanf("%d%d",&x,&y);
        while(n--)
        {
            scanf("%d%d",&a,&b);
            if(a==x || b==y)
                printf("divisa\n");
            else if(a>x && b>y)
                printf("NE\n");
            else if(a<x && b>y)
                printf("NO\n");
            else if(a<x && b<y)
                printf("SO\n");
            else
                printf("SE\n");
        }
        scanf("%d",&n);
    }
    return 0;
}
