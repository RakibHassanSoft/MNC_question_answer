/*
 * XOR-Based Approach to Find Duplicate
 *
 * Properties of XOR:
 * 1. Self-Canceling: a ^ a = 0 (any number XORed with itself is 0).
 * 2. Identity: a ^ 0 = a (any number XORed with 0 remains unchanged).
 * 3. Commutative and Associative: The order of XOR operations does not matter.
 *
 * Approach:
 * - The array contains numbers from 1 to (N-1) with one duplicate.
 * - By XORing all numbers in the array and all integers from 1 to (N-1),
 *   every number cancels itself except the duplicate.
 *
 * Example:
 * Input: arr = [4, 2, 1, 3, 1]
 * Step 1: XOR all elements in arr:
 *         4 ^ 2 ^ 1 ^ 3 ^ 1 = 5
 * Step 2: XOR all numbers from 1 to (N-1):
 *         1 ^ 2 ^ 3 ^ 4 = 4
 * Step 3: Final XOR:
 *         5 ^ 4 = 1
 * Output: 1
 *
 * Why it works:
 * - Numbers in the range (1 to N-1) cancel each other due to XOR's properties.
 * - The duplicate number remains because it XORs with itself in the array.
 *
 * Complexity:
 * - Time Complexity: O(N), as we loop through the array and range.
 * - Space Complexity: O(1), as we only use a constant amount of extra space.
 */

int findDuplicate(vector<int> &arr) 
{
    int n = arr.size();
    int xorArr = 0, xorRange = 0;

    // XOR all elements in the array
    for (int num : arr)    xorArr ^= num;

    // XOR all numbers from 1 to n-1
    for (int i = 1; i < n; i++)   xorRange ^= i;

    // Duplicate = XOR_arr ? XOR_range
    return xorArr ^ xorRange;
}



// int findDuplicate(vector<int> &arr) 
// {
//     int slow = arr[0];
//     int fast = arr[0];

//     // Phase 1: Detect the cycle
//     do {
//         slow = arr[slow];
//         fast = arr[arr[fast]];
//     } while (slow != fast);

//     // Phase 2: Find the entry point of the cycle
//     slow = arr[0];
//     while (slow != fast) {
//         slow = arr[slow];
//         fast = arr[fast];
//     }

//     return slow; // The duplicate number
// }



// #include <unordered_map>
// int findDuplicate(vector<int> &arr) 
// {
//     unordered_map<int, int> freq;
//     for (int num : arr) {
//         if (++freq[num] > 1) {
//             return num; // Found the duplicate
//         }
//     }
//     return -1; // Should not reach here as per problem constraints
// }
