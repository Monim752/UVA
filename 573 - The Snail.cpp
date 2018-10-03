#include<bits/stdc++.h>
using namespace std;
int main()
{
    double H,U,D,F;

    while(1)
    {
        cin>>H>>U>>D>>F;
        if(H==0)
           break;
        double ih=0.0;
        int day=0;
        double ff=U*(F/100);
        while(1)
        {
            day++;
            if(U>0)
            ih=ih+U;
            U=U-ff;
            if(ih>H)
                break;
            ih=ih-D;
            if(ih<0)
                break;

        }
        if(ih>=0)
            cout<<"success on day "<<day<<endl;
        else
            cout<<"failure on day "<<day<<endl;

    }
    return 0;
}
