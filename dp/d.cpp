#include<iostream>
#include<vector>

using namespace std;

void GetMaxSumRectangle(vector<vector<int>> & matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    // Inclusion Exclusion Principle
    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++){

            // Add element from the previous column
            if(r > 0) 
               matrix[r][c] += matrix[r-1][c];    
            // Add element from the previous row
            if(c > 0) 
               matrix[r][c] += matrix[r][c-1];
            // Subtract diagonal element that got added twice from previous row and column additions
            if(r > 0 && c > 0) 
               matrix[r][c] -= matrix[r-1][c-1];
             cout << matrix[r][c] << " ";
         }
         cout << endl;
    }   

    int maxsum = -127*100*100;

    for(int i=0; i<rows; i++) 
      for(int j=0; j<cols; j++)
        for(int k=i; k<rows; k++) 
          for(int l=j; l<cols; l++) { 

            int sum_subrectangle = matrix[k][l];

            if(i > 0)  
               sum_subrectangle -= matrix[i-1][l];
            if(j > 0)  
               sum_subrectangle -= matrix[k][j-1];
            if(i > 0 && j > 0)  
               sum_subrectangle += matrix[i-1][j-1];

            if(sum_subrectangle > maxsum){
               maxsum = sum_subrectangle;
            }
        }

    cout<< maxsum << endl;
}

int main(){
    
    
    int n;
    cin >> n;
    vector<vector<int>> v(1+n, vector<int>(1+n));
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
        cin >> v[i][j];
      }
    }
    GetMaxSumRectangle(v);
    return 0;
};