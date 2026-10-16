class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0;i<n;i++){
            if (nums[i]>target){
                nums.insert(nums.begin()+(i),target);
                
                return i;
            }
            else if (nums[i] == target) return i;
            else if (nums[n-1]<target) return n;
            
        }  return -1;     
    }
};