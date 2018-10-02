#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,ns;
    int maxi;

    while(cin>>T)
    {
        for(int i=1; i<=T; i++)
        {
        cin>>N;
        maxi=0;
        for(int k=1; k<=N; k++)
        {
            cin>>ns;
            if(maxi<ns)
                maxi=ns;
        }
        cout<<"Case "<<i<<": "<<maxi<<endl;
        }
    }
    return 0;
}
