using namespace std;
class Solution {
public:
bool possible(vector<int>& bloomDay,int day , int m , int k){
    int cnt = 0;
    int noofb =0;
    for(int i =0 ; i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
            cnt++;
        }else{ 
        noofb += (cnt/k);
        cnt = 0;
        }
        }
        noofb += (cnt/k);
        if(noofb>=m){
            return 1;
        }else{
            return 0;
        }
}
int mini(vector<int>& bloomDay){
    int mini = INT_MAX;
    for(int i=0 ; i<bloomDay.size();i++){
        mini = min(mini , bloomDay[i]);
    }
    return mini;
}
int maxi(vector<int>& bloomDay){
    int maxi = INT_MIN;
    for(int i=0 ; i<bloomDay.size();i++){
        maxi = max(maxi , bloomDay[i]);
    }
    return maxi;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(((long long)m*k) > bloomDay.size())return -1;
        int low = mini(bloomDay);
        int high = maxi(bloomDay);
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay,mid,m,k)==1){
                high = mid-1;
            }else{
                low = mid+1;
            }

        }
        return low;
    }
};