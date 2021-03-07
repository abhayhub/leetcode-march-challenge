class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        return len * (len + 1)/2 - sum;
    }
};
