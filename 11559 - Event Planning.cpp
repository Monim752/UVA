#include<bits/stdc++.h>
using namespace std;
 int main()
{
    int n,b,h,w;
    int a,s;

    while(cin>>n>>b>>h>>w)
    {
        long cost=b+100;
        while(h--)
        {
            cin>>a;
            for(int i=1; i<=w; i++)
            {
                cin>>s;
                if(s>=n)
                {
                    int temp=a*n;
                    if(temp<cost)
                        cost=temp;
                }
            }
        }
        if(cost>b)
            cout<<"Stay at home"<<endl;
        else
            cout<<cost;
    }
    return 0;
}
