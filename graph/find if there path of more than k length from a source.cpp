#include<bits/stdc++.h>
using namespace std;
//INPUT 1
//10 11
//23
//1 2 1 
//2 3 2
//3 4 2
//2 5 5
//5 6 2
//6 7 1
//4 7 3
//7 10 2
//9 10 1
//4 8 4
//8 9 5

//OUTPUT 1

//INPUT 2
//10 11
//24
//1 2 1 
//2 3 2
//3 4 2
//2 5 5
//5 6 2
//6 7 1
//4 7 3
//7 10 2
//9 10 1
//4 8 4
//8 9 5
//OUTPUT 0
bool solve (int src ,int k,vector<pair<int,int> > g[],vector<bool> &vis){
	vis[src]=true;
	if(k<=0)
	return true;
	for(auto x:g[src]){
		int u=x.first;
		int w=x.second;
		if(vis[u]==true)//means there exist a cycle
		continue;
		if(w>=k)//means the weigth become greator than k
		return true;
		if(solve(u,k-w,g,vis))
		 return true;
		 
	}
	vis[src]=false;
	return false;
}
int main()
{
	int v,e;
	int k;
	cin>>v>>e;
	cin>>k;
	vector<pair<int,int> > g[v+1];
	for(int i=0;i<e;i++)
	{
		int x,y,w;
		cin>>x>>y>>w;
		g[x].push_back({y,w});
		g[y].push_back({x,w});
	}
	vector<bool> vis(v+1,false);
	cout<<solve(1,k,g,vis);
	return 0;
}


