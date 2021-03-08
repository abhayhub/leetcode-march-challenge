class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
         if(nums.size() == 0) return res;
		
        vector<int> mp(nums.size()+1,0);
		
		// find duplicate
        for(int i = 0; i < nums.size(); i++) {
            if(mp[nums[i]] == 1) res.push_back(nums[i]);
            mp[nums[i]] ++;
        }
		// find lost
        for(int i = 1; i <= nums.size(); i++) {
            if(mp[i] == 0) {
                res.push_back(i);
                break;
            }
        }
        return res;
        
    }
};
