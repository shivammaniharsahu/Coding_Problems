#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,cow;
		cin>>n>>cow;
		ll ar[n];
		for(int i=0;i<n;i++)
			cin>>ar[i];
		sort(ar,ar+n);
		ll ans=0,mid,lb=1,ub=1e9;
		while(lb<=ub)
		{
			mid=(ub+lb)/2;
			ll prev=ar[0],c=1;
			for(int i=1;i<n;i++)
			{
				if(ar[i]-prev>=mid)
				{
					prev=ar[i];	
					c++;
					if(c==cow)
					break;
			
				}
			}
			if(c==cow)
			{
				ans=mid;
				lb=mid+1;
			}
			else
				ub=mid-1;
		}
		cout<<ans<<endl;
		
	}
}
