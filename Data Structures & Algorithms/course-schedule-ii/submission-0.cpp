class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<int> graph[n];
        vector<int> indegree(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][1]].push_back(edges[i][0]);
            indegree[edges[i][0]]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> ans;
        int fin = 0;
        while(!q.empty()){
            int top = q.front();
            q.pop();
            ans.push_back(top);
            fin++;
            for(auto& it: graph[top]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        vector<int> emp;
        return fin == n?ans:emp;
    }
};
