class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0;
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        int c=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==2)
                    q.push({i,j});
                
                if(grid[i][j]==1)
                    c++;
            }
            
        }
        
        while(!q.empty())
        {
            int s=q.size();
            if(c==0)
                return ans;
            while(s--)
            {
                
                int i=q.front().first;
                
                int j=q.front().second;
                q.pop();
                if(i-1>=0&&grid[i-1][j]==1)
                {
                    c--;
                    grid[i-1][j]=2;
                   q.push({i-1,j}); 
                }
                if(j-1>=0&&grid[i][j-1]==1)
                {
                    c--;
                    grid[i][j-1]=2;
                   q.push({i,j-1}); 
                }
                if(i+1<row&&grid[i+1][j]==1)
                {   
                    c--;
                    grid[i+1][j]=2;
                   q.push({i+1,j}); 
                }
                if(j+1<col&&grid[i][j+1]==1)
                {
                    c--;
                    grid[i][j+1]=2;
                   q.push({i,j+1}); 
                }
            }
            ans++;
        }
        if(c!=0)
            return -1;
      return ans;
        
        
    }
};
