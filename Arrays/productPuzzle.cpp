
//brute
// class Solution{
//   public:
//     // nums: given vector
//     // return the Product vector P that hold product except self at each index
//     vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
//         //code here 
//       vector<long long int> lAr(n,1);
//       vector<long long int> rAr(n,1);
//      // lAr.push_back(1);
      
//       for(int i=1;i<nums.size();i++){
//        lAr[i] = nums[i-1] * lAr[i-1];
//       }
//       rAr[n-1] = 1;
      
//       for(int i=n-2;i>=0;i--){
//           rAr[i] = nums[i+1] * rAr[i+1];
//       }
//        vector<long long int> ans;
//        for(int i=0;i<n;i++)
//        ans.push_back(lAr[i]*rAr[i]);
//         return ans;
//     }
// };


//efficient

/*




*/
