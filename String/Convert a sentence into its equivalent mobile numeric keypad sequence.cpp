#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string ar[]={"2","22","222","3",
				"33","333","4","44","444",
				"5","55","555","6","66","666",
				"7","77","777","7777",
				"8","88","888",
				"9","99","999","9999"
				};
	string s;
	
	cin>>s;
	vector<string> ans;
	for(int i=0;i<s.length();i++)
	{
		int res=s[i]-65;
		ans.push_back(ar[res]);	
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
}
