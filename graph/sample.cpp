#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int> adj[],int src,vector<bool> &vis,vector<bool> &order)
{
    vis[src]=true;
    //cout<<vis[src]<<" ";
    for(auto x:adj[src])
    {
        if(!vis[x])
        {
         bool f=dfs(adj,x,vis,order); 
            if(f)
                return true;
        }
        else if(order[x])
        {
            return true;;
        }
    }
    order[src]=false;
    return false;
}

int main() {

	// Write your code here
    
    int v,e;
    cin>>v>>e;
    vector<int> adj[v+1];
    for(int i=1;i<=e;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    vector<int> ans;
    
    	vector<bool> vis(v+1,false);
    
    		vector<bool> order(v+1,false);
    for(int i=1;i<=v;i++)
    {
    	
    	
    	if(!vis[i])
    	{
		
    		bool res=dfs(adj,i,vis,order);
    		cout<<i<<" ";
            if(res)
            {
            	
                ans.push_back(1);
            }
            else
            {
                ans.push_back(0);
            }	
		}
        
    }
    for(int i=0;i<ans.size();i++)
    {
			cout<<ans[i]<<" ";
    }
    
    
    
    
    
}
