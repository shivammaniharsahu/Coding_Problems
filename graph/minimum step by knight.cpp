class Solution {
public:
	int minStepToReachTarget(vector<int>&Kn, vector<int>&Tp, int n){
	    // Code here
	    //-1 beacause of 0 index
	    int x1=Kn[0]-1;
	    int y1=Kn[1]-1;
	    int x2=Tp[0]-1;
	    int y2=Tp[1]-1;
	    queue<pair<int,int>> q;
	    int ar[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	         ar[i][j]=0;
	    }
	    
	    q.push({x1,y1});
	    while(!q.empty())
	    {
	        auto c=q.front();
	        int i=c.first;
	        int j=c.second;
	        q.pop();
	         if(i+1<n&&i+1>=0&&j-2>=0&&j-2<n&&ar[i+1][j-2]==0)
	         {
	             ar[i+1][j-2]=ar[i][j]+1;
	             q.push({i+1,j-2});
	             
	         }
	         if(i+1<n&&i+1>=0&&j+2>=0&&j+2<n&&ar[i+1][j+2]==0)
	         {
	             
	             ar[i+1][j+2]=ar[i][j]+1;
	             q.push({i+1,j+2});
	         }
	         if(i-1<n&&i-1>=0&&j+2>=0&&j+2<n&&ar[i-1][j+2]==0)
	         {
	             
	             ar[i-1][j+2]=ar[i][j]+1;
	             q.push({i-1,j+2});
	         }
	         if(i-1<n&&i-1>=0&&j-2>=0&&j-2<n&&ar[i-1][j-2]==0)
	         {
	             
	             ar[i-1][j-2]=ar[i][j]+1;
	             q.push({i-1,j-2});
	         }
	        if(i-2<n&&i-2>=0&&j-1>=0&&j-1<n&&ar[i-2][j-1]==0)
	         {
	             
	             ar[i-2][j-1]=ar[i][j]+1;
	             q.push({i-2,j-1});
	         }
	         if(i-2<n&&i-2>=0&&j+1>=0&&j+1<n&&ar[i-2][j+1]==0)
	         {
	             
	             ar[i-2][j+1]=ar[i][j]+1;
	             q.push({i-2,j+1});
	         }
	         if(i+2<n&&i+2>=0&&j-1>=0&&j-1<n&&ar[i+2][j-1]==0)
	         {
	             
	             ar[i+2][j-1]=ar[i][j]+1;
	             q.push({i+2,j-1});
	         }
	        if(i+2<n&&i+2>=0&&j+1>=0&&j+1<n&&ar[i+2][j+1]==0)
	         {
	             
	             ar[i+2][j+1]=ar[i][j]+1;
	             q.push({i+2,j+1});
	         }
	         
	    }
	    
	    
	    
	    return ar[x2][y2];
	}
};
