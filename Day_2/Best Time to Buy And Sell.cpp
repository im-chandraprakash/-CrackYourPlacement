#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int profit = 0;
        int buy = prices[0];

        for(int i =1; i< n; i++){

            if(buy > prices[i]){
                buy = prices[i];
            }
            else if(buy <= prices[i]){
                profit = max(profit , prices[i] - buy);
            }
        }

        return profit;
    }
};