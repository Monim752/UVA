#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,m;
    long long A[1000];
    long long ans, res;
    int cnt=1;
    while((scanf("%d",&t))==1 && t)
    {
        cout<<"Case "<<cnt++<<":"<<endl;
        for(int i=0; i<t; i++)
        {
            cin>>A[i];
        }
        cin>>m;
        while(m--)
        {
            cin>>n;
            ans=A[0]+A[1];

            for(int i=0; i<t; i++)
            {
                 for(int j=i+1; j<t; j++)
                 {
                     res=A[i]+A[j];
                     if(abs(ans-n)>abs(res-n))
                     {
                        ans=res;
                     }
                 }
            }
            cout<<"Closest sum to "<<n<<" is "<<ans<<"."<<endl;
        }

    }
    return 0;
}
