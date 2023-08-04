//Link - https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        vector<vector<int>> arr;
        
        for(int i=0;i<n;i++){
            arr.push_back({nums[i],i});
        }
        
        //sort(begin(arr),end(arr));
        sort(arr.begin(),arr.end());
        
        int low = 0, high = n-1;
        
        while(low<high){
            
            int currSum = arr[low][0]+arr[high][0];
            
            if(currSum == target)
            {
                return {arr[low][1],arr[high][1]};
            }
            else if(currSum>target){
                high--;
            }
            else
                low++;
            
        }
        
        return {};
    }
};
