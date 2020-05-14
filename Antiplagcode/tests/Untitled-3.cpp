#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;
int main()
{
    int n, x1, x2;
    cin>>n;
    queue <int> q;
    int s[n+1];
    for(int i=1; i<=n; i++)
        s[i]=-1;
    int a[n+1][n+1];
    int p[n+1];
    for (int i=0;i<n;i++) p[i] = 0;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];
    cin>>x1>>x2;
    q.push(x1);
    s[x1]=0;
    if(x1==x2) cout<<0;
    else
    {
        while(!q.empty())
        {
            for(int i=1; i<=n; i++)
            {
                if(a[q.front()][i]==1 && s[i]==-1) {s[i]=s[q.front()]+1; p[i]=q.front(); q.push(i);}
            }
            q.pop();
        }
        
        cout<<s[x2]<<endl;
        if(s[x2]>=0)
        {
            int b[s[x2]];
            int k=0, x=x2;
            b[k++]=x;
            while(x!=x1)
            {
                x=p[x];
                b[k++]=x;
            }
            for(int i=s[x2];i>=0;i--)
                cout<<b[i]<<" ";
        }
    }
    
    
    
    return 0;
    
}