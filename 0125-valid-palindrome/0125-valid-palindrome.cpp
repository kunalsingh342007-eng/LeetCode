class Solution {
public:
    bool isPalindrome(string s) {

      std::erase_if(s,[](unsigned char c){
        return !std::isalnum(c);
      });
      int p1=0;
      int p2=s.length()-1;
      int flag=0;
      while(p1<p2) {
        if(std::tolower(s[p1])!= std::tolower(s[p2])){
            flag=1;
            break;
        }
        p1++;
        p2--;
      }
      if(flag==0) 
      return true;
      else
      return false;

    }
};