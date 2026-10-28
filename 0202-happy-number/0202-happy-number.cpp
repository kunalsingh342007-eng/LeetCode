class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>seen;
      
        while(n!=1&&seen.find(n)==seen.end())
    {seen.insert(n);
  int totalsum=0;
        while(n>0){
           int digit= n%10;
           totalsum+=digit*digit;
           n/=10;
        }
        n=totalsum;}
        return n==1;;
        
    }
};