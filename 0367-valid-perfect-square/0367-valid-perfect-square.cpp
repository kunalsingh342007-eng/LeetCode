class Solution {
public:
    bool isPerfectSquare(int num) {
if(num<1) return false;

long long s=1;
long long c=num;
while(s<=c){
    long long mid=s+(c-s)/2;
    long long sqr=mid*mid;

    if(sqr==num){
    return true;}

    else if(sqr>num){
    c=mid-1;}
    else{
    s=mid+1;}

}
return false;
           
    
    }
};