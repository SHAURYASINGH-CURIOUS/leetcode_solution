class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int> mpp;
       mpp[0]=1;
       int counter = 0;
       int prefixsum=0;
    for(int i=0;i<nums.size();i++){
        prefixsum += nums[i];
       int remove = prefixsum-k;
        counter += mpp[remove]; 
        mpp[prefixsum]+=1;
    
    }

       return counter;

        
    }
};