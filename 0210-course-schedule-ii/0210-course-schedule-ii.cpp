class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(N);
        vector<int> ans,indegree(N,0);
        for(auto edge : prerequisites){
            graph[edge[1]].push_back(edge[0]);
            ++indegree[edge[0]];
        }
        queue<int> Q;
        for(int i = 0;i < N;i++)
            if(indegree[i] == 0)
                Q.push(i);
        int counter = 0;
        while(!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            ans.push_back(u);
            ++counter;
            for(auto v : graph[u])
            {
                if(--indegree[v] == 0)
                    Q.push(v);
            }
        }
        if(ans.size()== N) return ans;           
        return {};
    }
};