// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
	public:
	//Function to return list containing vertices in Topological order.
	int main() {
   int v,e;
   cin>>v>>e;
   vector<int> adj[v+1];
   vector<int> in(v+1,0);
   for(int i=0;i<e;i++)
   {
   	  int x,y;
   	  cin>>x>>y;
   	  adj[x].push_back(y);
   	  in[y]++;
   }
   toposort(V,adj);
    return 0;
}   
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> in(V,0);
	    queue<int> q;
	    for(int i=0;i<V;i++)
	    {
	        for(auto x:adj[i])
	        {
	            in[x]++;
	        }
	    }
	    int c=1;
	    
	    vector<int> v(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(in[i]==0)
	        {
	        q.push(i);
	        v[i]=1;
	        }
	        
	    }
	    while(!q.empty())
	    {
	        int top=q.front();
	        q.pop();
	        c++;
	        for(int x:adj[top])
	        {
	            in[x]--;
	            if(in[x]==0)
	            {
	                
	                q.push(x);
	                v[x]=v[top]+1;
	            }
	            
	        }
	    }
	    for(int i=0;i<v.size();i++)
	    cout<<v[i]<<" ";
	    return v;
	}
};




