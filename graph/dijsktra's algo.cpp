#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> > adj[10001];
int main()
{
	int v,e,w,a,b;
	cin>>v>>e;	
	while(e--)
	{
		cin>>a>>b>>w;
		adj[a].push_back({b,w});
		adj[b].push_back({a,w});
	}
    priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > > pq;
   vector<int> dist(v+1,INT_MAX);
   
   pq.push({1,0});
   //pq.push({src,wt});
   //dist[src]=0;
   dist[1]=0;
   while(!pq.empty())
   {
   	    int cur_d=pq.top().second;
   	    int curr=pq.top().first;
   	    pq.pop();
   	    for(pair<int,int> x:adj[curr])
   	    {
   	       if(cur_d+x.second<dist[x.first])
			  {
			  	dist[x.first]=cur_d+x.second;
			  	pq.push({x.first,dist[x.first]});
			  }	
		}
   }
	for(int i=1;i<=v;i++)
	cout<<dist[i]<<" ";
	return 0;
}


