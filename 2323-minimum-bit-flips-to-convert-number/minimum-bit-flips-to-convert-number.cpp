class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        int temp = ans;
        int cnt=0; 
        int i =0;
        while(temp != 0){
            if(ans & (1<<i)){
                cnt++;
            }
            temp = temp/2;
            i++;
        }
        return cnt;
    }
};