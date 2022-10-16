#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//three step
//1 sort vector pair
//2 merge intervals
//3 search the kth element
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,q,a,b;
		cin>>n>>q;
		vector<pair<ll,ll>> vp;
		for(ll i=0;i<n;i++)
		{
			cin>>a>>b;
			vp.push_back({a,b});
		}
		sort(vp.begin(),vp.end());
		int idx=0;
		for(ll i=1;i<vp.size();i++)
		{
			if(vp[idx].second>=vp[i].first)
			{
				vp[idx].second=max(vp[idx].second,vp[i].second);
			}
			else
			{
				idx++;
				vp[idx]=vp[i];
			}
		}
		while(q--)
		{
			ll k;
			cin>>k;	
			ll ans=-1;
			for(ll i=0;i<=idx;i++)
			{
				if(vp[i].second-vp[i].first+1>=k)
				{
						ans=vp[i].first+k-1;
						break;
				}
				else
				{
					k=k-(vp[i].second-vp[i].first+1);
				}
			}
				
			cout<<ans<<endl;
		}
	}
	return 0;
}
