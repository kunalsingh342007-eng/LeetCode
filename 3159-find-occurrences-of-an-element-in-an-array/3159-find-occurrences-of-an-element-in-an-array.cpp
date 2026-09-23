class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x){
                res.push_back(i);}

            }
            
        
        vector<int>ans;
        for (int q:queries){
            if(q<=res.size()){
                ans.push_back(res[q-1]);
            }
            else{
            ans.push_back(-1);}
        }
        return ans;
        
        
    }
};