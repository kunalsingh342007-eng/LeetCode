/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int s=1;
        int c=n;
        while(s<=c){
        int m=s+(c-s)/2;
        int res=guess(m);
        if(res==0)
        return m;
    
    else if(res<=0)
    c= m-1;

    else
    s= m+1;
        
        }
        return -1;
        
    }

};