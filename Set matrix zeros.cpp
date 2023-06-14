void setZeros(vector<vector<int>> &matrix)

{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();
	int col = 1;
	//step1 : Traverse the matrix and mark the row and col accordingly;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m; j++){
			if(matrix[i][j] == 0){
				matrix[i][0] = 0;
				if(j != 0){
					matrix[0][j] = 0;
				}
				else{
					col = 0;
				}
			}
		}
	}
	//step 2 : Mark with 0 from (1,1) to (n - 1 , m - 1);
	for(int i = 1; i < n ; i++){
		for(int j = 1; j < m ; j++){
			if(matrix[i][j] != 0){
				if(matrix[i][0] == 0 || matrix[0][j] == 0){
					matrix[i][j] = 0;
				}
			}
		}
	}
	if(matrix[0][0] == 0){
		for(int j = 0 ; j < m ; j++){
			matrix[0][j] = 0;
		}
	}
	if(col == 0){
		for(int i = 0 ; i < n ; i++){
			matrix[i][0] = 0;
		}
	}
}
