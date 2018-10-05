#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r;
    string x;
    int cont=0;
    while(cin>>r>>n, r||n)
    {
        cont++;
        double price=20000000.00,d;
        int rm=-1,nr;
        string name,nam;
        for(int i=0; i<r; i++)
        {
            cin.ignore();
            getline(cin, x);
        }
        while(n--)
        {
            getline(cin, nam);
            scanf("%lf%d\n",&d,&nr);
            if(nr>rm)
            {
                rm=nr;
                name=nam;
                price=d;
            }
            else if(nr==rm && price>d)
            {
                rm=nr;
                name=nam;
                price=d;
            }
            for(int i=0; i<nr; i++)
            {
                getline(cin, x);
            }
        }
        if(cont>1)
            cout<<endl;
            cout<<"RFP #"<<cont<<endl;
        cout<<name<<endl;
    }
    return 0;
}
