void dfs(int element , vector < bool > & visited , vector < vector < int >> & adj , vector < int > & v){
    v.push_back(element);
    visited[element] = true;
    for(auto it : adj[element]){
        if(!visited[it]){
            dfs(it, visited , adj , v);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector < vector < int >> adj(V);
    for(auto it : edges){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    vector < bool > visited(V , false);
    vector < vector < int >> ans;
    for(int i = 0 ; i < V ; i++){
        if(!visited[i]){
            vector < int > v;
            dfs(i , visited , adj , v);
            ans.push_back(v);
        }
    }
    return ans;
}
