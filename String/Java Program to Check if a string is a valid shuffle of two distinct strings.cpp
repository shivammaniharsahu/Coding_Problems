#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	int len1=s1.length();
	int len2=s2.length();
	int len3=s3.length();
	if(len1+len2!=len3)
	cout<<"NO";
	else
	{
		int i=0,j=0,k=0,flag=0;
		while(k<len3)
		{
			if(s1[i]==s3[k])
			{
				i++;
			}
			else if(s2[j]==s3[k])
			{
				j++;
			}
			else 
			{
				flag=1;
				break;
			}
			k++;
		}
		if(i<len1||j<len2)
		cout<<"NO";
		else 
		cout<<"YES";
	}
	
}
