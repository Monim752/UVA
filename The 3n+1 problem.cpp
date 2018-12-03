#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        int i=a;
        int j=b;
        int cnt,mx=0;;
        if(a>b)
            swap(a,b);
        while(a<=b)
        {
            int n=a;
            cnt=1;
            while(n!=1)
            {
               if(n%2==0)
                n/=2;
               else
                  n=(3*n)+1;
               cnt++;
            }
            if(cnt>mx)
               mx=cnt;
               a++;
       }
        printf("%d %d %d\n",i,j,mx);
    }
   return 0;
}
