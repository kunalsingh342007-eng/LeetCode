class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
       int n=nums.size();
       vector<int>ans(n);
      int left=0;
      int right=n-1;
      int index=n-1;
      

      while(left<=right) {
       int leftvalue=nums[left]*nums[left];
       int rightvalue=nums[right]*nums[right];

       if(leftvalue<rightvalue){
         ans[index]=rightvalue;
         right--;
         }

        else{
            ans[index]=leftvalue;
            left++;  

        }
        index--;
    }
        return ans;

     
    }
};