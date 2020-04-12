#include<bits/stdc++.h>
using namespace std;
void bfs(int s,vector<int>adj[],bool vis[])
{
    queue<int>q;
    q.push(s);
    vis[s] = true;
    while(!q.empty())
    {
        int front=q.front();
        cout<<front<<" ";
        q.pop();
        for(auto i:adj[front])
        {
            if(!vis[i]){
                vis[i]= true;
                q.push(i);
            }
        }
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N, E;
        cin>>N>>E;
        vector<int> adj[N];
        bool vis[N];
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
        }
        bfs(0, adj, vis);
        cout<<endl;
    }
}