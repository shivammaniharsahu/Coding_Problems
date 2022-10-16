class Solution{
    
    #define max 10
    public:
  bool isSafe(int row,int col,vector<vector<int>> &ar,int n,bool vis[][max])
  {
      //cout<<"hi";
       if (row < n || row <0 || c < 0 ||
                      col < n || vis[row][col]==false
                               || ar[row][col] == 1)
            return true;
 
    return false;
  }
  
  
  
    void dfs(int i,int j,vector<vector<int>> &ar,int n,vector<string>& ans,string path,bool vis[][max])
    {
         if (i == -1 ||i == n || j == -1
               || j == n || vis[i][j]
                           || ar[i][j] == 0)
        return;
        
         if (i == n - 1 && j == n - 1) {
             ans.push_back(path);
        return;
         }
        //cout<<i<<" "<<j<<" \n";
        
         vis[i][j] = true;
        if (isSafe(i+ 1, j, ar,n,vis) )
        {
            path.push_back('D');
            dfs(i + 1, j, ar, n,
                     ans,path,vis);
            path.pop_back();
        }
        if (isSafe(i, j-1, ar ,n,vis))
        {
            path.push_back('L');
            dfs(i, j-1, ar, n,
                     ans,path,vis);
            path.pop_back();
        }
        if (isSafe(i, j+1, ar, n,vis))
        {
            path.push_back('R');
            dfs(i, j+1, ar, n,
                     ans,path,vis);
            path.pop_back();
        }
        if (isSafe(i-1, j, ar, n,vis))
        {
            path.push_back('U');
            dfs(i-1, j, ar, n,
                     ans,path,vis);
            path.pop_back();
        }
        vis[i][j] = false;
    }
        
    vector<string> findPath(vector<vector<int>> &ar, int n) {
        bool vis[n][max];
        memset(vis, false, sizeof(vis));
            vector<string> ans;
            string path;
              dfs(0, 0, ar, n, 
                          ans, path,vis);
        return ans;
    }
};
