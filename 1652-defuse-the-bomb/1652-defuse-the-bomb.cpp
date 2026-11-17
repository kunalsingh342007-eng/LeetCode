class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>result(n,0);
        int left=0;
        int right=0;
        if(k==0){
            return result;
        }
        if(k>0){
            left=1;
            right=k;
        }
        else{
            left=n-abs(k);
            right=n-1;
        }
        int window_sum=0;
        for(int i=left;i<=right;++i){
            window_sum+=code[i];
        }
        for(int i=0;i<n;i++){
            result[i]=window_sum;

            window_sum-=code[left%n];

            left++;
            right++;

            window_sum+=code[right%n];
        }
        return result;
    }
};