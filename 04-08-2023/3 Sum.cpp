//Link - https://leetcode.com/problems/3sum/

#define ll long long
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> res;
        sort(begin(nums),end(nums));
        
        for(int i=0;i<n;i++){
            
            ll target = -nums[i];
            int low = i+1, high = n-1;
            
            while(low<high){
                
                ll currSum = nums[low]+nums[high];
                if(currSum == target){
                    
                    res.push_back({nums[i],nums[low],nums[high]});
                    
                    int tmpLow = nums[low];
                    while(low<high and nums[low] == tmpLow)
                        low++;
                    
                    int tmpHigh = nums[high];
                    while(low<high and nums[high] == tmpHigh)
                        high--;
                    
                }
                else if(currSum>target){
                    high--;
                }
                else{
                    low++;
                }
                
            }
            
            while(i+1<n and nums[i] == nums[i+1])
                i++;
            
        }
        
        return res;
        
    }
};
