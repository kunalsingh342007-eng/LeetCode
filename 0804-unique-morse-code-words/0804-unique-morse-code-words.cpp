class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
          const std::vector<std::string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", 
            ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", 
            "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."
          };
           unordered_set<string>uniqueTransformation;
           for(const string&word:words){
            string transformation="";
            for(char c:word){
                transformation+=morse[c-'a'];
            }
            uniqueTransformation.insert(transformation);
           }
           return uniqueTransformation.size();
    }
};