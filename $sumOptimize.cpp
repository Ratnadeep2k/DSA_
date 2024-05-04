#include<bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    int n = nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for(int i =0;i<n;i++)
    {
        if( i>0 && nums[i] == nums[i-1] ) continue;
        for( int j = i+1;j<n;j++){
            if(j!=(i+1) && nums[j]==nums[j-1]) continue;
            int k = j+1;
            int left = n-1;
            while(k<left){
                long long sum = nums[i];
                 sum+= nums[j];
                 sum+= nums[k];
                 sum+=nums[left];
                 if(sum== target){
                     vector<int> temp = {nums[i],nums[j],nums[k],nums[left]};
                     ans.push_back(temp);
                     k++;left--;
                     while( k<left && nums[k]==nums[k-1]) k++;
                     while(k<left && nums[left]==nums[left+1]) left--; 
                 }
                 else if( sum < target) k++;
                 else left--;
            }

        }