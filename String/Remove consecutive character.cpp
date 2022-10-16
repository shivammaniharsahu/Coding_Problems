// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            ans+=s[i];
            int f=0;
            while(i<s.length()-1&&s[i]==s[i+1])
            {
                i++;
                if(i+1==s.length())
                {
                    f=1;
                    break;    
                }
                
            }
        }
        return ans;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
} 



  // } Driver Code Ends
