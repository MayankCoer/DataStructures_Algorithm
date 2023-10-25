class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> array;
        int i = 0;
        int j = i+1;
        sort(nums.begin() , nums.end());
        
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                array.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
        return array;
    }
    
};