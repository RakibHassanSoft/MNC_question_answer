#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){

	sort(arr.begin(), arr.end());
	 // Traverse the array and find the duplicate
    for (int i = 0; i < n - 1; i++) {
      if (arr[i] == arr[i + 1]  )   return arr[i];
    
    }

    return -1;
}

