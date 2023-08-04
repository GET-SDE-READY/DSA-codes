//Link - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();
        int low = 0, high = n-1;
        
        while(low<high){
            
            int currSum = numbers[low]+numbers[high];
            
            if(currSum == target)
            {
                return {low+1,high+1};
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
