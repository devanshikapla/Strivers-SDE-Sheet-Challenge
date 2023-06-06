bool dfs(int v , vector<int> adj[], vector < bool > & vis , int parent){
  vis[v] = 1;
  for(auto it : adj[v]){
    if(!vis[it]){
      if(dfs(it , adj , vis , v)){
        return true;
      }
    }
    else if(parent != it){
      return true;
    }
  }
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  //making of adj matrix;
  
  vector < int > adj[n + 1];
  
  for(auto it : edges){
    int a = it.first;
    int b = it.second;
    adj[a].push_back(b);
  }
  vector < bool > vis(n , 0);
  for(int i = 0 ; i < n ; i++){
    if(vis[i] == false){
      if(dfs(i , adj , vis , -1)){
        return true;
      }
    }
  }
  return false;

}
