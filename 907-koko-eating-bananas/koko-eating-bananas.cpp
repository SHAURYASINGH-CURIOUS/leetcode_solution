using namespace std;
class Solution {
    
public:

int maxi(vector<int>& piles){
    int maxval = INT_MIN;
  for(int i=0 ; i<piles.size() ; i++){
     maxval = max(maxval,piles[i]);
    } return maxval;  
}

long long totalhrss(vector<int>& piles , double hourly){
    long long totalhrs = 0 ;
    for(int i =0 ; i<piles.size(); i++){
    totalhrs += ceil((double)(piles[i])/(double)(hourly));
    }return totalhrs;
}
    int minEatingSpeed(vector<int>& piles, int h) {
    int maxival = maxi(piles);
    int low = 1;
    int high = maxival;
    while(low<=high){
        double mid = low + (high-low)/2;
        long long totalhrs=totalhrss(piles , mid);
        if(totalhrs<=h){
            high = mid -1;
        }else {
            low = mid + 1;
        }
    }
      return low;  
    }
};