class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int lastsmall=INT_MIN;
        int longest = 0;
        int currcnt = 0;
         int n = nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i]-1 ==lastsmall){
            currcnt++;
            lastsmall=nums[i];
            }
            else if(nums[i] != lastsmall){
              currcnt=1;
              lastsmall=nums[i];
                
            }

            longest=max(currcnt,longest);
        }
        return longest;
    }
};