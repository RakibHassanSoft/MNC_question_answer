#include <bits/stdc++.h> 
void sort012(int *arr, int n) {
   //Dutch National Flag Algorithm 
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap arr[low] and arr[mid], then move both pointers
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)  mid++;
            // If it's 1, just move the mid pointer
        
        else {
            // If it's 2, swap arr[mid] and arr[high], then move high pointer
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}