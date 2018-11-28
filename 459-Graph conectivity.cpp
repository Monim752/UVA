#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>g[100];
bool visit[100];
void dfs(int x)
{
    visit[x]=true;
    for(int i=0; i<g[x].size(); i++)
    {
        int visited=g[x][i];
        if(!visit[visited])
            dfs(visited);
    }
}
int main()
{

    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        char ch[5];
        gets(ch);
        n=ch[0]-'A'+1;
        for(int i=1; i<=n; i++)
        {
            g[i].clear();
        }
         while(gets(ch) && ch[0]!='\0')
         {
             int a=ch[0]-'A'+1;
             int b=ch[1]-'A'+1;
             g[a].push_back(b);
             g[b].push_back(a);
         }
         int res=0;
         memset(visit, false ,sizeof(visit));
         for(int i=1; i<=n; i++)
          {
              if(!visit[i])
              {
                  dfs(i),res++;
              }
          }
         printf("%d\n",res);
         if(t)
            putchar('\n');

    }
    return 0;
}
