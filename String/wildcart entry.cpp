// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++
class Solution{
    public:
    
    int dp[1001][1001];
    bool solve(string s, string p,int i,int j)
    {
        if(i==-1&&j==-1)
            return true;
        if(j==-1)
        {
            for(int k=0;k<i;k++)
            {
                if(s[k]!='*')
                    return false;
            }
            return true;
        }
        if(i==-1)
            return false;
        if(dp[i][j]!=-1)
            return dp[i][j];
        if(s[i]==p[j]||s[i]=='?')
        {
            return dp[i][j]=solve(s,p,i-1,j-1);
        }
        if(s[i]=='*')
        {
            bool op1=solve(s,p,i-1,j);
            
            bool op2=solve(s,p,i,j-1);
            return dp[i][j]=op1||op2;
        }
        return dp[i][j]=0;
        
    }
    
    bool match(string wild, string pattern)
    {
        memset(dp,-1,sizeof(dp));
        return solve(wild,pattern,wild.length(),pattern.length()); 
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        if(ob.match(wild, pattern))
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}  // } Driver Code Ends
