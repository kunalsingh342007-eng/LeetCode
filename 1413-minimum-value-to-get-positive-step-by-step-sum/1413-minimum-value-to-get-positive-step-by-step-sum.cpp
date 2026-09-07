class Solution {
public:
    int minStartValue(vector<int>& nums) {
      int mv=0;
      int s=0;
      for(int i=0;i<nums.size();i++)  {
        s+=nums[i];
        mv=min(mv,s);

      }
      if(mv>0){
        return 1;
      }
      else
      return (-(mv)+1);
    }
};