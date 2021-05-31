maxSubarraySum(arr, N){
        
    let ret_val=-Math.pow(10,7);
    for(let i=0;i<arr.length;i++){
        let max_sum=-Math.pow(10,7);
        let sum=0;
        for(let j =i;j<arr.length;j++){
            sum+=arr[j];
            if(max_sum < sum){
                max_sum=sum;
            }
        }
        if(max_sum>ret_val){
            ret_val=max_sum;
        }
    }
    return ret_val;
} 