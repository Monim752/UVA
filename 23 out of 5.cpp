#include<bits/stdc++.h>
using namespace std;

int tupel[5];
bool Possible(int n, int t)
{
    if(t==5)
        return n==23;
    int num=tupel[t];
    return Possible(n+num, t+1) || Possible(n-num, t+1) || Possible(n*num, t+1);
}
void inputNumber()
{
    for(int i=0; i<5; i++)
    {
        cin>>tupel[i];
    }
}
bool NonZero()
{
    for(int i=0; i<5; i++)
    {
        if(tupel[i])return true;
    }
        return false;
}
int main()
{
    while(inputNumber(), NonZero())
    {
        sort(tupel, tupel+5);
        bool possible=false;
        do{
            possible= Possible(tupel[0],1);
            if(possible)
            {
                break;
            }
        }while(next_permutation(tupel, tupel+5));
        if(possible)
            cout<<"Possible"<<endl;
        else
            cout<<"Impossible"<<endl;
    }
    return 0;
}
