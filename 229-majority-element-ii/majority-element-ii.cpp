class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 =0 , cnt2 =0;
        int el1 =0 , el2 =0;
        int n = nums.size();
        vector<int> ans;

        for(int i =0 ; i<n ; i++){
            if(cnt1 == 0 && nums[i] != el2){
                el1=nums[i];
                cnt1=1;
            }else if(cnt2 == 0 && nums[i] != el1){
                el2=nums[i];
                cnt2=1;
            }else if(el1==nums[i]){
                cnt1++;
            }else if(el2 == nums[i]){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
int finalcnt1=0;
            int finalcnt2=0;
        for(int i =0 ; i<n ; i++){
           
            if (nums[i]==el1){
                finalcnt1++;
            }
            if (nums[i]==el2){
                finalcnt2++;
            }
    
        } 
        if(finalcnt1 > (int)(n/3)){
            ans.push_back(el1);
        }
         
        
        if(finalcnt2 > (int)(n/3)&& el2 != el1){
            ans.push_back(el2);
        }else{
            return ans;
        }
        
       return ans; 
    }
};