#include<bits/stdc++.h>
using namespace std;
void fun(int arr[],int n){
    int dp[n];
    for(int i=0;i<n;i++)
	dp[i]=0;
    dp[0]=arr[0];
    int ans=max(0,arr[0]);
    for(int i=1;i<n;i++){
        dp[i]=max(dp[i-1]+arr[i],arr[i]);
        ans=max(ans,dp[i]);
    }
    cout<<ans;
}
int main()
{
	int ar[6]={1,-2,3,4,5,6};
	fun(ar,6);
}
