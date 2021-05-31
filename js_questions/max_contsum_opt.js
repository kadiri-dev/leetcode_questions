function maxSubarraySum(arr, N){
    let i =0;
    let max_sum=-Math.pow(10,7);
    let sum=0;
    while(i<N){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        else{
            if(max_sum<sum){
                max_sum=sum;
            }
        }
        i++;
    }
    return max_sum;
} 