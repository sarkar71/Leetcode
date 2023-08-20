class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() < 3) return res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i +=1) {
            int l = i + 1, r = nums.size() - 1;
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            
            while (l < r) { 
                int target = 0, sum = nums[i] + nums[l] + nums[r];
                if (sum == target) { 
                    res.push_back({nums[i], nums[l], nums[r]});
                    l +=1;
                    while (l < r && nums[l] == nums[l - 1]) l +=1; 
                    
                } 
                (sum < target) ? l +=1 : r -=1; 
            }
        }
        return res;
    }
};
