#include <bits/stdc++.h>
#include <vector>
using namespace std;

void find(vector<vector<string>> gd)
{
    map<int, vector<string> > mp;
    int n = gd[0].size();
    map<int, int> mp2;
    for(int k=0;k<gd.size();k+=4)
    {
        int frq[17] ={0};
        for(int i =0;i<4;i++)
        {
            for(int j=k;j<k+4;j++)
            {
                mp[k].push_back(gd[i][j]);
                if(gd[i][j]!="?")
                {
                    int num = stoi(gd[i][j]);
                    frq[num] =1;
                }  
            }
        }
        for(int l=1;l<=16;l++)
            if(frq[l]==0) {mp2[k] = l;break;}
    }
    vector<vector<int>> v;
    for(auto x : mp2)
        v.push_back({x.second, x.first});
    
    sort(v.begin(), v.end());
    
    vector<vector<string>> ans (4, vector<string> (gd[0].size()));
    int m = 0;
    for(int k=0;k<gd.size();k+=4)
    {
        int x = v[m][1], z =0;
        for(int i=0;i<k+4;i++)
        {
            for(int j=0;j<4;j++)
            {
                ans[i][j] = mp[x][z];
                if(ans[i][j]=="?") ans[i][j] = to_string(v[m][0]);
                z++;
            }
        }
    }
    m++;
   for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<4;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}



int main()
{
    
//     vector<vector<string>> v = {{"1", "2", "3", "4"}, {"?", "6", "7", "8"},
//                                {"9", "10", "11", "12"}, {"13", "14", "15", "16"}};
    
    
    vector<vector<string>> v = {{"14", "3", "10", "4","16","10","?","2","9","15"},
                                {"16", "7", "8", "2","1","4","8","3","3","16","7"},
                                {"?", "9", "6", "5","14","12","7","6","2","10","4"},
                                {"15", "1", "13", "12","9","15","5","13","1","8","12"}};
    
    find(v);
    
	return 0;
}
