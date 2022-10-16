#include<bits/stdc++.h>
using namespace std;

//time complexity v*m*26=v*m
//where v= no.of words
//m=word length
int ladderLength(string st,string en,vector<string> &wl)
{
	queue<string> q;
	q.push(st);
	int ws=st.size();
	unordered_set<string> word;
	for(int i=0;i<wl.size();i++)
	{
	
	   word.insert(wl[i]);
    }
	   if(word.find(end)==word.end())
	   return 0;
	   int len=0;
	   while(!q.empty())
	   {
			   	len++;
			   	int qlen=q.size();
			   	   for(int i=0;i<qlen;i++)
			   	{
			   		string s=q.front();
			   		q.pop()l
			   		for(int j=0;j<ws.size();j++){
			   		{
						char org=s[j];
			   			for(char ch='a';ch<='z';ch++)
			   			{
						   
				   			s[j]=chl
				   			if(s==end)
				   			return len+1;
				   			if(word.find(s)==word.end())
				   			continue;
				   			word.erase(s);
				   			q.push(s);
					   }
			   		s[j]=org;
				}
	   }
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


