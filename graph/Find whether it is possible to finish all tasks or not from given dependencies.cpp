class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        vector<int> v;
        vector<int> in(n);
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            for(auto x:adj[i])
            {
                in[x]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(in[i]==0)
            {
                q.push(i);   
            }       
        }
        while(!q.empty())
        {
            int top=q.front();
            q.pop();
            v.push_back(top);
            for(int x:adj[top])
            {
                in[x]--;
                if(in[x]==0)
                    q.push(x);
            }
        }
        if(v.size()!=n)
            return 0;
      
            return 1;
    }
};
