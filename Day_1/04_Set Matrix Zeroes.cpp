class Solution {
public:

    // Aproach - Using matrix's column and row as an array and updating the values accordingly. 

    void setZeroes(vector<vector<int>>& matrix) {
        
        bool rowZero = false;
        bool colZero = false;

        int n = matrix.size();
        int m = matrix[0].size();


        for(int i = 0; i< n; i++){
            if(matrix[i][0] == 0){
                colZero = true;
            }
        }

          for(int i = 0; i< m; i++){
            if(matrix[0][i] == 0){
                rowZero = true;
            }
        }

        for(int i = n-1 ; i >= 1; i--){
            for(int j = m-1; j >= 1; j--){

                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = n-1 ; i >= 1; i--){
            for(int j = m-1; j >= 1; j--){

                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if(rowZero){

           for(int i = 0; i< m; i++){
              matrix[0][i] = 0;
           } 
        
        }

        if(colZero){
            for(int i = 0; i< n; i++){
               matrix[i][0] = 0;
          }
        }
    }
};