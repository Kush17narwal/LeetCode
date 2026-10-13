class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int target = 0;
        sort(nums.begin(),nums.end());
        for (int i=0;i<n;i++){
            if (i>0 && nums[i]==nums[i-1]) continue;
                int j = i+1;
                int k = n-1;
                while(j<k){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum<target){
                        j++;
                    }
                    else if(sum>target){
                        k--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[k]});
                        j++;
                        k--;
                        while(j<k && nums[j]==nums[j-1])j++;
                    }
                }
                
            
        }
        return ans;
    }
};