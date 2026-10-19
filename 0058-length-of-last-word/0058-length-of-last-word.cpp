class Solution {
public:
    int lengthOfLastWord(string s) {
        unordered_map<int,int>wordlength;
     int i=0;
     int n=s.size();
     int lastwordlen=0;
    while(i<n){
        while(i<n && s[i]==' '){
            i++;

        }
        int len=0;
        if(i>=n)break;
        while(i<n && s[i]!=' '){
            len++;
            i++;
        }
        lastwordlen=len;
    }
      return lastwordlen;
     
    }
};