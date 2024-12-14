#include <bits/stdc++.h>
using namespace std;

//================****** ======= most important
bool canPlaceCows(vector<int>& stalls, int k, int minDist) {
    int count = 1;  // First cow placed at the first stall
    int lastPosition = stalls[0];  // Position of the first cow

    for (int i = 1; i < stalls.size(); i++) {
        if (stalls[i] - lastPosition >= minDist) {  // Can place cow here
            count++;
            lastPosition = stalls[i];  // Update last position
            if (count == k) {
                return true;  // All cows are placed
            }
        }
    }
    return false;  // Couldn't place all cows
}

int aggressiveCows(vector<int>& stalls, int k) {
    sort(stalls.begin(), stalls.end());  // Sort the stall positions

    int low = 0;  // Minimum possible distance
    int high = stalls[stalls.size() - 1] - stalls[0];  // Maximum possible distance (between farthest stalls)
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // Middle distance

        if (canPlaceCows(stalls, k, mid)) {
            result = mid;  // We can place cows with at least mid distance, try for larger
            low = mid + 1;
        } else {
            high = mid - 1;  // We can't place cows, try smaller distance
        }
    }

    return result;
}
