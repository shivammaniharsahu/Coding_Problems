
#include <bits/stdc++.h>
using namespace std;


int main() {
		// Writing output to STDOUT
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar,ar+n);
	long presum[n+1];
	presum[0]=0;
	for(int i=1;i<n+1;i++)
	{
		presum[i]=presum[i-1]+ar[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		int idx=upper_bound(ar,ar+n,x)-ar;
		cout<<idx<<" "<<presum[idx]<<endl;
	}
}


