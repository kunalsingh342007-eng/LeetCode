class Solution {
public:
    int minMoves(vector<int>& nums) {
       int maxele=0;
       int n=nums.size();
       int res=0;
       
        for(int j=0;j<n;j++){
            maxele=max(maxele,nums[j]);}
         
        for(int j=0;j<n;j++){
        
            res+=maxele-nums[j];}
            return res;
    }
};