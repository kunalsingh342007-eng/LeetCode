class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA=0;
        int sumB=0;
        for(int x:aliceSizes){
            sumA+=x;
        }
         for(int y:bobSizes){
            sumB+=y;
        }
        int diff=(sumA-sumB)/2;
        sort(bobSizes.begin(),bobSizes.end());
        for(int i:aliceSizes){
            int target =i-diff;
            if(binary_search(bobSizes.begin(),bobSizes.end(),target)){
                return{i,target};
            }
        }
        return {};
        
    }
};