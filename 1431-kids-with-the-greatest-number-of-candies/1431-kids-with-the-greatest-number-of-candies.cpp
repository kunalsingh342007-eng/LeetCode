class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int extraCandies) {
        int max=*max_element(c.begin(),c.end());
        vector<bool>ans;
        for (int i=0;i<c.size();i++){
            ans.push_back(c[i]+extraCandies>=max);

        }
        return ans;

    }
};