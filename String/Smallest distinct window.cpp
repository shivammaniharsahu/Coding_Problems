// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    string findSubString(string str)
    {
        // Your code goes here   
\
        unordered_map<char,int> mp;
        unordered_set<char> ss;
        for(int i=0;i<str.length();i++)
        {
                    ss.insert(str[i]);
        }
        int n=ss.size();//no. of unique character
        int i=0,j=1,c=0;
        mp[str[0]]++;
        c++;
        int ans=INT_MAX;
        while(i<=j&&j<str.length())
        {
            if(c<n)//when no. of unique character are not eqaul to n
            {
                if(mp[str[j]]==0)//when we are finding new unique character
                {
                    c++;
                }
                mp[str[j]]++;
                j++;
            }
            else if(c==n)//when we have no. equal to c 
            {
                ans=min(ans,j-i);
                if(mp[str[i]]==1)//decreasing the size
                    c--;
                mp[str[i]]--;
                  i++;
            }
        }
           while(c==n)
            {
                ans=min(ans,j-i);
                if(mp[str[i]]==1)
                c--;
                mp[str[i]]--;
                i++;
            }
            string res="";
            i=i-1;
        while(ans--)//since number of unique character will be containing in length =ans
        {
            res+=str[i];
            i++;
        }
       // cout<<res<<" ";
        return res;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str).size() << endl;
    }
    return 0;
}  // } Driver Code Ends
