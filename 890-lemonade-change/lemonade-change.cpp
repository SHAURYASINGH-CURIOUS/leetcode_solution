class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int five , ten , twenty = 0;

        for(int i=0 ; i<n ; i++){
            if(bills[i] == 5){
                five++;
            }else if(bills[i]== 10){
                ten++;
                five--;
            }else{
                twenty ++;
                if(ten <= 0){
                    five = five - 3;
                }else if(five<=0){
                    return false;
                }else{
                    ten--;
                    five--;
                }
                  
                }

            if(five<0 || ten <0 || twenty <0 ){
                return false;
            }
            }

        return true;
    }
};