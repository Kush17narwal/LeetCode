class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0], mpro = 0, pro = 0;
        for(int i = 0; i < prices.size(); i++){
            pro = prices[i] - buy;
            if(buy>prices[i]) buy = prices[i];
            if(pro > mpro) mpro = pro;
        }
        return mpro;

    }
};
