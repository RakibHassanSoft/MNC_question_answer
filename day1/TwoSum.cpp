#include<bits/stdc++.h>
using namespace std;
/*
Explaination
4 9
2 7 11 13

s = 0 
e = 3
2  7 11 13
s        e   s  + e = 2 + 13 = 15 no  s + e < target so r --
s        e   s  + e = 2 + 11 = 12 no  s + e < target so r --
s        e   s  + e = 2 + 7 =  9 no  s + e == target so yes
    
*/
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// using 2 pointer 
    sort(arr.begin(),arr.end());
    vector<pair<int,int>> ans;
    int s = 0;
    int e = n-1;
    while(s<e){
        int sum = arr[s]+arr[e];

        if(sum==target){
            ans.push_back({arr[s],arr[e]});
            s++;
            e--;
        }
        else if(sum>target)  e--;
        else s++;
    
    }    

    if(ans.empty())  ans.push_back({-1,-1});


    return ans;

}