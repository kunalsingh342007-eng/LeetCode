class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);

        for(int i;i<=n;i++){
            int temp=i;
            while(temp>0){
                     ans[i]+=(temp&1);
                     temp>>=1;
            }
        }
        return ans;
    }
};