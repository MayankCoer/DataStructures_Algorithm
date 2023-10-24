class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> array;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i+1 ; j < nums.size() ; j++){
                if((nums[i] ^ nums[j]) == 0){
                    array.push_back(nums[i]);
                }
                else{
                    continue;
                }
            }
        }
        return array;
    }
    
};