class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numsSet(nums.begin(), nums.end());

        int longest=0;

        for(int num : numsSet){
            if(numsSet.find(num-1) == numsSet.end()){
                int currentNum = num;
                int currentLength = 1;

                while(numsSet.find(currentNum+1)!= numsSet.end()){
                    currentNum++;
                    currentLength++;
                }
                longest=max(longest, currentLength);
            }
        }
        return longest;
        
    }
};
