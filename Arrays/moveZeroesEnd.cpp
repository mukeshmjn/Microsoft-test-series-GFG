

//brute

// 	  class Solution{
// public:
// 	void pushZerosToEnd(int arr[], int n) {
// 	    // code here
// 	    int ans[n];
// 	    int j=0,cnt=0;
// 	    for(int i=0;i<n;i++){
// 	        if(arr[i] == 0){
// 	            cnt++;
// 	        }
// 	        else{
// 	            ans[j++] = arr[i];
// 	        }
// 	    }
// 	    int i;
// 	    for(i=0;i<n-cnt;i++){
// 	        arr[i] = ans[i];
// 	    }
// 	    for(i=i;i<n;i++){
// 	        arr[i] = 0;
// 	    }
	    
// 	}
// };
	    
// 	}
// };

//better

/*
// public:
// 	void pushZerosToEnd(int arr[], int n) {
// 	    // code here
// 	    int ans[n];
// 	    int j=0,cnt=0;
// 	    for(int i=0;i<n;i++){
// 	     if(arr[i]!=0){
// 	         arr[cnt++] = arr[i]; 
// 	     }
// 	    }
// 	     while(cnt<n){
// 	         arr[cnt++] = 0;
// 	     }
	     
	    

*/