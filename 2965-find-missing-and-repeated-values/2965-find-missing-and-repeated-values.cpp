class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        long long N=1ll*n*n;
        
        long long exsum = N*(N+1)/2;
        long long exsqsum = N*(N+1)*(2*N+1)/6;
        
        long long acsum = 0;
        long long acsqsum=0;
        for (int i = 0;i<n;i++){
            for (int j = 0;j<n;j++){
                long long x=grid[i][j];

                acsum+=x;
                acsqsum+=x*x;

            }
        }
        long long diff = acsum - exsum;
        long long sqdiff = acsqsum - exsqsum;

        long long sum = sqdiff/diff;

        long long repeated = (sum + diff)/2;
        long long missing = (sum - diff)/2;

        return {(int)repeated,(int)missing};
    }     
};    