class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incr=true;
        bool decr=true;


       for(size_t i=1;i<nums.size();i++) {
        if(nums[i]<nums[i-1]){
            incr=false;
        }

         if(nums[i]>nums[i-1]){
            decr=false;
        }

        if(!incr && !decr)
        { return false;
        }

        }

        return incr||decr;
       
    }
};