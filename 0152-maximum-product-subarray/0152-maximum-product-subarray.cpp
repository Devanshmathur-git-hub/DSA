//class Solution {
//public:
 //   int maxProduct(vector<int>& nums) {
//
  //      int ans = nums[0];
    //    int n = nums.size();
///
   //     for(int i = 0; i < n; i++) {
     ///       int product = 1;
//
  ///          for(int j = i; j < n; j++) {
     ///           product *= nums[j];
//
  //              ans = max(ans, product);
    //        }
      //  }
//
  //      return ans;
    //}
//};

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            int temp = maxProd;
            maxProd = max(nums[i], max(maxProd * nums[i],minProd*nums[i]));
            minProd = min(nums[i], min(minProd * nums[i], temp*nums[i]));

            ans = max(ans, maxProd);
        }

        return ans;
    }
};