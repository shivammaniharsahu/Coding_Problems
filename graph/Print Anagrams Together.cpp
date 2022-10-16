// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;

 // } Driver Code Ends
//User function Template for C++

vector<vector<string> > Anagrams(vector<string>& sl) 
{
    // Your Code Here
    map<string,vector<string> > str;
    
    unordered_set<string> ss;
    for(int i=0;i<sl.size();i++)
    {
        string res=sl[i];
        sort(res.begin(),res.end());
        
        str[res].push_back(sl[i]);
    }
    vector<vector<string> > ans(str.size());
    
    int index=0;
    for(auto i:str)
    {
        auto v=i.second;
        for(int j=0;j<v.size();j++)
        {
            ans[index].push_back(v[j]);
        }
        index++;
    }
    return ans;
    
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends
