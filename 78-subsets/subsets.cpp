class Solution {
public:
    void subset( int ind , vector<vector<int>>& ans , int n ,vector<int>& empty ,vector<int>& nums){
        if(ind==n){
            ans.push_back(empty);
            return;
        }
        empty.push_back(nums[ind]);
        subset(ind + 1 , ans , n , empty , nums);
        empty.pop_back();
        subset(ind + 1 ,ans , n ,empty ,nums);
    
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> empty;

        subset(0 , ans , n , empty , nums);
        return ans;

    }
};