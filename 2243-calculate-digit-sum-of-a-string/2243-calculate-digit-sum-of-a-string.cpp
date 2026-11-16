class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.length()>k){
            string new_s="";
            for(int i=0;i<s.length();i+=k){
            string chunks=s.substr(i,k);
            int chunks_sum=0;
            for(char c:chunks){
                chunks_sum+=(c-'0');
            }
            new_s+=to_string(chunks_sum);
        }
        s=new_s;
        }
        return s;
    }
};