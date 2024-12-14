
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){


   // Sort the array
    sort(arr.begin(), arr.end());
    
    vector<vector<int>> result;
    
    // Nested loop to find pairs
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            // Check if the sum equals the target
            if (arr[i] + arr[j] == s) {
              result.push_back({arr[i], arr[j]});
            }
       /*
       5 4
       2 -6 2 5 2  
       when i = 0; j = 0 + 1 so
                       arr[0]= 2 for i and arr[1]= -6 for j
                       arr[0]= 2 for i and arr[2]=  2  for j  one pare 2,2
                       arr[0]= 2 for i and arr[3]=  5  for j 
                       arr[0]= 2 for i and arr[4]=  2  for j  one pare 2,2

                       arr[1]= -6 for i and arr[2]= 2  for j 
                       arr[1]= -6 for i and arr[3]= 5  for j 
                       arr[1]= -6 for i and arr[4]=  2  for j  

                       arr[2] = 2 for i and arr[3]  = 5 for j
                       arr[2] = 2 for i and arr[4]  = 2 for j  one pare 2,2
                       ...
       */

        }
    }

    return result;

 
}