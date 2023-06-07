include <bits/stdc++.h>

void bfs(int r, int c, int **grid, vector<vector<int>> &visited, 
               int n, int m){
      queue < pair < int , int >> q;
      q.push({r , c});
      visited[r][c] = 1;
      while(!q.empty()){
         int x = q.front().first;
         int y = q.front().second;
         q.pop();
         for (int i = -1; i <= 1; i++)
         {
            for (int j = -1; j <= 1; j++)
            {
                int nx = x + i, ny = y + j;

                if (nx >= 0 and ny >= 0 and nx < n and ny < m and grid[nx][ny] == 1 and !visited[nx][ny])
                {
                    visited[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
   int cnt = 0;
   vector < vector < int >> visited(n , vector < int > (m));
   for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < m ; j++){
         if(!visited[i][j] && arr[i][j] == 1){
            bfs(i , j , arr, visited , n , m);
            cnt++;
         }
      }
   }
   return cnt;
}
