#include<bits/stdc++.h>
using namespace std;
int main()
{
    double H,M,h,m;
    while(scanf("%lf:%lf",&H,&M))
    {
        if(H==0 && M==0)
            break;
        h=(H*30+(M*0.5));
        m=(M*6);
        double radian=h-m;
        if(radian<0)
            radian*=-1;
        if(radian>180)
            radian=360-radian;
        printf("%.3lf\n",radian);
    }
    return 0;
}
