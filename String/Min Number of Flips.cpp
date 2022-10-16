// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends


int minFlips (string s)
{
    // your code here
    // Possible case
    //10101
    //101010
    //010101
    //01010
    int len=s.length();
    int mxzero=0,mxone=0,res=INT_MAX,ans=INT_MAX;
    
        for(int i=0;i<len;i++)
        {
                
             //10101 even position me one hona chaiye or odd me zero
            if(i%2==0&&s[i]!='1'||i%2==1&&s[i]!='0')
            {
                mxone++;
            }
                
             //01010 even position me zero hona chaiye or odd me one
            if(i%2==0&&s[i]!='0'||i%2==1&&s[i]!='1')
            {
                mxzero++;
            }
        }
       // cout<<mxzero<<" "<<mxone<<endl;
        res=min(mxone,mxzero);

    return res;
}
