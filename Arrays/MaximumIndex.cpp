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

//improvised

