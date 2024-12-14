#include <bits/stdc++.h>
/*
=========******===================
7 19 3
4 21 0
step 1 = same
step 2 = arr[1,2] =0 so arr[1,0] = 0 and arr[0,2]=0 2 corner 0
step[]


*/
void setZeros(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    bool firstRowZero = false, firstColZero = false;

    // Step 1: Check if the first row or first column needs to be zeroed
    for (int i = 0; i < rows; ++i)   if (matrix[i][0] == 0) firstColZero = true;
    for (int j = 0; j < cols; ++j)   if (matrix[0][j] == 0) firstRowZero = true;
    

    // Step 2: Mark rows and columns to be zeroed using the first row and column
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0; // Mark row
                matrix[0][j] = 0; // Mark column
            }
        }
    }

    // Step 3: Zero out cells based on the markers
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)    matrix[i][j] = 0;
 
        }
    }

    // Step 4: Handle the first row and column separately
    if (firstRowZero) {
        for (int j = 0; j < cols; ++j)     matrix[0][j] = 0;
       
    }
    if (firstColZero) {
        for (int i = 0; i < rows; ++i)   matrix[i][0] = 0;
    }

    // }
}