#include<bits/stdc++.h>
using namespace std;

    int  newmat[10][10];

int determinant( int matrix[10][10], int n) {
   int det = 0;
   int submatrix[10][10];
   if (n == 2)
   return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
   else {
      for (int x = 0; x < n; x++) {
         int subi = 0;
         for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
               if (j == x)
               continue;
               submatrix[subi][subj] = matrix[i][j];
               subj++;
            }
            subi++;
         }
         det = det + (pow(-1, x) * matrix[0][x] * determinant( submatrix, n - 1 ));
      }
   }
   return det;
}



int main()
{
	int v,e;
	cin>>v>>e;
    int mat[v][v];
    
	int x,y;
	vector<int> adj[v];
	for(int i=0;i<e;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
    }
	for(int i=0;i<v;i++)
	{
		int sz=adj[i].size();
		mat[i][i]=sz;//storing the degree in the diagonal	
		for(auto x:adj[i])
		{
				mat[i][x]=-1;//if edge exist then assign -1
				mat[x][i]=-1;	
		}
	}
	//for deleting any one row and any one coloumn
	for(int i=1;i<v;i++)
	{
		for(int j=1;j<v;j++)
		{
			newmat[i-1][j-1]=mat[i][j];
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	
	// code for finding determinant
   cout<<"Total number of spanning tree = "<<determinant(newmat,v-1);
	

	
}
