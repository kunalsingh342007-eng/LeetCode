class Solution {
public:
    int mySqrt(int x) {


long long s=1;
long long c=x;
int ans=0;
while(s<=c){
    long long mid=s+(c-s)/2;
    long long sqr=mid*mid;

    if(sqr==x){
    return mid;}

    else if(sqr>x){
    c=mid-1;}
    else{
        ans=mid;
    s=mid+1;}

}
return ans;
           
    
    }
};
