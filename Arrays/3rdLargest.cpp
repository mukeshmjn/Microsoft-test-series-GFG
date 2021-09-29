//brute -----just sort nlogn


// class Solution{
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


//efficicent]



/*

 int thirdLargest(int arr[], int n)
    {
        
        int f=-1,s=-1,t=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>f){
            t=s;
            s=f;
            f=arr[i];
            }
            else if(arr[i]>s){
                t=s;
                s=arr[i];
                
            }
            else if(arr[i]>t){
                t=arr[i];
            }
        }
        return t;
    }


*/