class Solution {
public:
    
    void backtrack(vector<int>& nums, int start, int end, vector<vector<int>>& permutations) {
        if(start==end) {
            permutations.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++) {
            swap(nums[start], nums[i]);
            backtrack(nums, start+1, end, permutations);
            swap(nums[start], nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> permutations;
        backtrack(nums, 0, nums.size()-1, permutations);
        
        return permutations;
    }
};
