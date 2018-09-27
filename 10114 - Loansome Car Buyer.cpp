#include<bits/stdc++.h>
using namespace std;
int main()
{
    int loanDu,nrp;
    double dpayment,loan,dcp[101];

    while(true){
        cin>>loanDu>>dpayment>>loan>>nrp;
    if(loanDu<0)
        break;
        int m;
        double p;
    while(nrp--)
    {
        cin>>m>>p;
        for(int i=m; i<101; i++)
        {
            dcp[i]=p;
        }
    }
    int n=0;
    double monpay=loan/loanDu;
    double curV=(loan+dpayment)*(1-dcp[0]);
    double curLoan=loan;
    while(curLoan>curV)
    {
        n++;
        curLoan-=monpay;
        curV*=(1-dcp[n]);
    }
    cout<<n<<" month";
    if(n!=1)
        cout<<"s";
    cout<<endl;
}
    return 0;
}
