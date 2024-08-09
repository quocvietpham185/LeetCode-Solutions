class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int size=nums.size();
        int num=0;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
             if(nums[i]==nums[j]&& i<j){
            num++; 
        }
        }
        }
       
        
        return num;
    }
};
