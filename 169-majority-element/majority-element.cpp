class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int el = nums[0];
        int finalcnt=0;
         
        //  mores algo
        for(int i=0 ; i<n ; i++){
           if (nums[i]== el){
            cnt++;
           } else{
            cnt--;
           }
        if(cnt==0){
            el=nums[i];
            cnt=1;
        }
        
        }

        for(int i=0;i<n;i++){
            if(nums[i]==el){
                finalcnt++;
            }
        
        }
        if(finalcnt>n/2){
            return el;
        }
    return 0;}
};