vector<vector<int>> dir{{1,0},{-1,0},{0,1},{0,1}};

if(mat.size()==0)
return mat;
queue<pair<int,int>>q;
for(int i=0;i<mat.size();i++)
{
	for(int j=0;j<col;j++)
	{
		if(mat[i][j]==1)
			mat[i][j]=-1;
		else
			q.push({i,j});
	}
 } 
 int level=1;
 while(!q.empty())
 {
 	int size=q.size();
 	for(int k=0;k<size;k++)
 	{
 		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(auto d:dir)
		{
			int i=d[0]+x;
			int j=d[1]+y;
			if(i>=0&&j>=0&&i<row&&j<col&&mat[i][j]==-1)
			{
				mat[i][j]=level;
				q.push({i,j});
			}
			
		}
		level++;
	 }
	 return mat;
 }
