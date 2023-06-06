#include <bits/stdc++.h>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
   
    queue < pair < pair < int, int > , int >> q;
    int vis[n][m];
    int cntFresh = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(grid[i][j] == 2){
                q.push({{i , j} , 0});
                vis[i][j] = 2;
            }
            else{
                vis[i][j] = 0;
            }
            if(grid[i][j] == 1) cntFresh++;
        }
    }
    int time = 0;
    int delRow[] = {-1 , 0 , 1 , 0};
    int delCol[] = { 0 , 1 , 0, -1};
    int cnt = 0;
    while(!q.empty()){
        int row = q.front().first.first;
        int col = q.front().first.second;
        int timeQ = q.front().second;
        time = max(time , timeQ);
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                   && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                q.push({{nrow , ncol} , timeQ + 1});
                vis[nrow][ncol] = 2;
                cnt++;
           }
        }
    }
    if(cnt != cntFresh) return -1;
    return time;
}
