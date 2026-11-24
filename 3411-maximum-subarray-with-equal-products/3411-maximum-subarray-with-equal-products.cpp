class Solution {
public:
    int maxLength(vector<int>& nums) {
     int n=nums.size();
     int maxLen=0;
     for(int i=0;i<n;i++){
        int currentlcm=1;
        int currentgcd=0;
        long long prod=1;
        for(int j=i;j<n;j++){
            prod*=nums[j];
            if(prod>25200){
                break;
            }
            currentlcm=lcm(currentlcm,nums[j]);
            currentgcd=gcd(currentgcd,nums[j]);
            if(prod==currentlcm*currentgcd){
                maxLen=max(maxLen,j-i+1);
            }
        }
     }
     return maxLen;   
    }
};