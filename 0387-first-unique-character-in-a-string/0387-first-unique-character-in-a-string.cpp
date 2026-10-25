class Solution {
public:
    int firstUniqChar(string s) {
     int index=0;
     for(int i=0;i<s.size();i++){

         bool unique=true;
        for(int j=0;j<s.size();j++){
            if(i!=j && s[i]==s[j]){
                unique=false;
                break;
            }
        }
        if(unique){
            return i;
        }
     }
     return -1;
     
    }
};