//brute
/*

create all subsets and once u find exit

*/

//--optimised
// class Solution{
// public:
//     vector<int> nextPermutation(int N, vector<int> arr){
//         // code here
//         int i;
//         for(i=N-2;i>=0;i--){
//             if(arr[i]<arr[i+1])
//             break;
//         }
//         if(i>=0){
//             int j;
//             for(j=N-1;j>i;j--){
//                 if(arr[j]>arr[i]) break;
//             }
//             swap(arr[i],arr[j]);
//             reverse(arr.begin()+i+1,arr.end());
//         }else{
//             reverse(arr.begin(),arr.end());
//         }
//         return arr;
//     }