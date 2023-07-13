class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        //brute force
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
       //better approach
     
       int n = matrix.size();
       int m = matrix[0].size();
       int i = 0;
       int j = m - 1;
       while(i < n && j >= 0){
           if(matrix[i][j] == target){
               return true;
           }
           else if(matrix[i][j] > target){
               j--;
           }
           else{
               i++;
           }
       }
       return false;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n = matrix.size();
       int m = matrix[0].size();
       int start = 0; // starting index
       int end = (n * m) - 1 ; //end index

       while(start <= end){
           int mid = (start + (-start + end)/2);
           int row = mid / m;
           int col = mid % m;
           if(matrix[row][col] == target){
               return true;
           }
           if(matrix[row][col] < target) start = mid + 1;
           else{
               end = mid  - 1;
           }
       }
       return false;


    }
};
