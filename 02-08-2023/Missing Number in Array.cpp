//Link - https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        
        int value = 0;
        
        for(int i=1;i<=n;i++)
            value = value xor i;
        
        for(int i=0;i<n-1;i++)
            value = value xor array[i];
        
        return value;
        
    }
};
