class Solution {
public:
    int arrangeCoins(int n) { 
        int c=1;
        int r=n;
        while(r>=c){
            r-=c;
            c++;
        }return c-1;
        }
       
    
};