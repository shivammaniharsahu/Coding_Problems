#include<bits/stdc++.h>
using namespace std;
void subsequence(string t,int i,int n,string s)
{
	if(i==n)
	{
		cout<<t<<endl;
		return;
	}
	else 
	{
		subsequence(t,i+1,n,s);
		t+=s[i];
		subsequence(t,i+1,n,s);
	}
}
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	subsequence("",0,n,s);
	cout<<endl;
	
}
