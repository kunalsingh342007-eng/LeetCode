class Solution {
public:
    int lengthOfLastWord(string s) {
        unordered_map<int,int>wordlength;
     int i=0;
     int index=0;
     int n=s.size();
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
        wordlength[index++]=len;
    }
      return wordlength.empty() ? 0 : wordlength[index - 1];
     
    }
};