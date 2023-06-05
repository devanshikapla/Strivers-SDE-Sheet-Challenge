#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    vector < int > adj[vertex];
    for(auto it : edges){
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    for(int i = 0 ; i < vertex ; i++){
        sort(adj[i].begin() , adj[i].end());
    }
    vector < int > bfs;
    queue < int > q;
    
    vector < int > visited(vertex , 0);
    
    for(int i = 0; i < vertex; i++){
        if(!visited[i]){
            visited[0] = 1;
            q.push(i);
            while(!q.empty()){
                int top = q.front();
                q.pop();
                bfs.push_back(top);
                for(auto it : adj[top]){
                    if(!visited[it]){
                        visited[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs;
}
