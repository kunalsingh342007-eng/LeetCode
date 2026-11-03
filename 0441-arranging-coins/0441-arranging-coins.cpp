class Solution {
public:
    int arrangeCoins(int n) { 
        int l=1;
        int r=n;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long coin_used=mid*(mid+1)/2;
            if(coin_used==n){
                return mid;}
                else if(coin_used<n){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            
        }
        return r;
           
           

        }
       
    
};