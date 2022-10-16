#include<bits/stdc++.h>
using namespace std;


int main()
 {
    string s1,s2;
    int f=0;
    cin>>s1>>s2;
    int len1=s1.length();
    
    int len2=s2.length();
    if(len1!=len2)
    cout<<"NO";
    else
    {
    	
	    string temp=s1+s1;//doubling the s1
	    //And now we need to check wheather string 2 is substring of temp if yes result will be also yes else result will be no
	    for(int i=0;i<len1*2-len1;i++)
	    {
	    	string str=temp.substr(i,len1);
	    	if(str==s2)
	    	{
	    		f=1;
	    		break;
			}
		}
		if(f)
		cout<<"YES";
		else 
		cout<<"NO";	    	
	}
	return 0;
}

//ABCDCDAB
