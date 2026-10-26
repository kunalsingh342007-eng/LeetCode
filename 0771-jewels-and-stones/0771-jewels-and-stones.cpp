class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int>jawelsset( jewels.begin(),jewels.end());
        int count=0;

        for(int stone:stones){
if(jawelsset.contains(stone)){
    count++;
}
        }
        return count;
        
    }
};