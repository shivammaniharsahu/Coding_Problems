#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	vector<string> ans;
	string res="";
	int c=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			res+=s[i];
			c++;
		}
		else 
		{
			c--;
			res+=s[i];
		}
		if(c==0)
		{
			ans.push_back(res);
			res="";
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
	
	
}
	

