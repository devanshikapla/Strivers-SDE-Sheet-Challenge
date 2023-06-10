#include <bits/stdc++.h> 
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    // Write your code here.
    vector < int > dist(vertices , INT_MAX);
    vector < pair < int , int >> adjList[vertices];
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.push({0, 0});
    dist[0] = 0;


    //making the adj list of the vec

    for(auto it : vec){
        adjList[it[0]].push_back({it[1] , it[2]});
        adjList[it[1]].push_back({it[0] , it[2]});

    }
    while(!pq.empty()){
        pair < int , int > node = pq.top();
        pq.pop();
        vector < pair < int , int >> nodes = adjList[node.second];
        for(auto it : nodes){
            int dis = node.first + it.second;
            if(dis < dist[it.first]){
                dist[it.first] = dis;
                pq.push({dis , it.first});
            }
        }
    }
    return dist;
}
