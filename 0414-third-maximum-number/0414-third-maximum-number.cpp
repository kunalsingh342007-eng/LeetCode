class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>topthree;
      

        for(int nums:nums){
            topthree.insert(nums);
           if(topthree.size()>3){
            topthree.erase(topthree.begin());
           }

        }
        
            return topthree.size()==3 ?*topthree.begin():*topthree.rbegin();
        
    }
};