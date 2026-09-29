class Solution {
    private:
   int  getnumericvalue(string word){
    int num=0;
    for(char c:word){
        int digit=c-'a';
        num=10*num+digit;
    }
    return num;
   }
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int val1=getnumericvalue(firstWord);
        int val2=getnumericvalue(secondWord);
        int targetval=getnumericvalue(targetWord);

        return val1+val2==targetval;
    }
};