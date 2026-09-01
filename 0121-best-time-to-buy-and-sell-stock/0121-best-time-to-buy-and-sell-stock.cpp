class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int besttimetobuy = prices[0];
        // int n = sizeof(prices);   //array
        int n = prices.size();        //vector

        for(int i=1 ; i<n ; i++){
            if(prices[i] > besttimetobuy){
              maxprofit = max(maxprofit , (prices[i] - besttimetobuy));
            }
            besttimetobuy = min(besttimetobuy, prices[i]);
        }
        return maxprofit;
    }
    };























// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minPrice = INT_MAX;
//         int maxProfit = 0;

//         for (int price : prices) {
//             minPrice = min(minPrice, price);
//             maxProfit = max(maxProfit, price - minPrice);
//         }

//         return maxProfit;
//     }
// };