function findMissingNumber(arr1){
    let sum=0;    
    for(let i=0;i<arr1.length;i++){
        sum+=arr1[i];        
    }
    let size = arr1.length +1;    
    console.log(size*(size+1)/2 - sum);
}

let arr1 = [1,2,4,5];
findMissingNumber(arr1);