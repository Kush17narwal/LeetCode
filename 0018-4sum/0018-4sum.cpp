class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
 
        int n= nums.size();
        sort(nums.begin(),nums.end());
        
        for (int i = 0;i<n;i++){
            if (i>0 && nums[i]==nums[i-1]) continue; 
            for (int j = i+1 ; j<n;){
                int m = j+1;
                int k = n-1;
                
                while (m<k){
                    long long sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[m];
                    if(sum<target){
                        m++;
                    }
                    if (sum>target){
                        k--;
                    }
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[m]});
                        k--;
                        m++;
                        while(m<k && nums[m] == nums[m-1]) m++;
                    }
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++;
            }
            
        }return ans;
    }
};