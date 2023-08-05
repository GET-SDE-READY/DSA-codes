#define ll long long
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        sort(begin(nums),end(nums));
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
                
                ll remTarget = (ll)target-(ll)nums[i]-(ll)nums[j];
                int low = j+1, high = n-1;
                
                while(low<high){
                    
                    ll currSum = nums[low]+nums[high];
                    
                    if(currSum == remTarget){
                        
                        res.push_back({nums[i],nums[j],nums[low],nums[high]});
                        
                        int tmpLow = nums[low];
                        while(low<high and nums[low] == tmpLow)
                            low++;
                        
                        int tmpHigh = nums[high];
                        while(low<high and nums[high] == tmpHigh)
                            high--;
                        
                    }
                    else if(currSum>remTarget){
                        high--;
                    }
                    else
                        low++;
                    
                }
                
                while(j+1<n and nums[j] == nums[j+1])
                    j++;
            }
            
            while(i+1<n and nums[i] == nums[i+1])
                i++;
            
        }
        
        return res;
    }
};
