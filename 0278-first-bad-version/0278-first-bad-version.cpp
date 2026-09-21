// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int s=1;
        int c=n;
        while(s<c){
        int m=s+(c-s)/2;
        int res=isBadVersion(m);
        if(isBadVersion(m)==1){
        c=m;}
    
    else{
    s=m+1;}}

    
        return s;
        }
        
        
    

}; 
 