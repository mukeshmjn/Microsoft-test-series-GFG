#include<bits/stdc++.h>
using namespace std;


//brute force
//  int maxIndexDiff(int A[], int N) 
//     { 
//         // Your code here
//       //  cout<<sizeof(A)/sizeof(A[0]);
//     int sz=sizeof(A)/sizeof(A[0]);
//         int minIdx=-1;
//         for(int i=0;i<N;i++){
//             for(int j=i;j<N;j++){
//                 if(A[i]<=A[j])
//                 minIdx = max(j-i,minIdx);
//             }
//         }
//         return minIdx;
//     }

// int main(){
// int arr[] = {1,2,3,4,5,6,7};
// cout<<maxIndexDiff(arr,7);

//     return 0;
// }

//improvised --binary search :)

// #include<bits/stdc++.h>
// using namespace std;
// int maxIndexDiff(vector<int> arr, int N) {


//     return 1;
// }

// int main(){
//     vector<int> arr{1,2,3,4,5};
//     int maxTilli[arr.size()+1];
//     for(int i=arr.size()-1;i>=0;i--){
//         maxTilli[i]=max(maxTilli[i+1],arr[i]);
//     }
//     int res=0;
//     for(int i=0;i<arr.size();i++){
//         int lo = i+1,hi = arr.size()-1,ans = i;
//         int mid = (lo+hi)/2;
//         while(lo<=hi){
//             if(arr[i]<=maxTilli[mid]){
//                 ans = max(mid,ans);
//                 lo = mid+1;
//             }
//             else{
//                 hi = mid-1;
//             }
//         }
//         res = max(res,ans-i);

//     }


//     return res;
// }

//efficient

    // int lMin[N];
    // int rMax[N];
    // lMin[0] = A[0];
    // for(int i=1;i<N;i++){
    //     lMin[i] = min(A[i],lMin[i-1]);
    // }
    // rMax[N-1] = A[N-1];
    // for(int i=N-2;i>=0;i--){
    //     rMax[i] = max(A[i],rMax[i+1]);
    // }
    // int i = 0, j = 0, maxDiff = -1;
    //  while (j < N && i < N) {
    //     if (lMin[i] <= rMax[j]) {
    //         maxDiff = max(maxDiff, j - i);
    //         j = j + 1;
    //     }
    //     else
    //         i = i + 1;
    // }
    
    // return maxDiff;

