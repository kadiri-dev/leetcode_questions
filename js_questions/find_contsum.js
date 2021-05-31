function find_contsum(arr,S){
    let map = new Map();
    map.set(0,0);  
    let sum=0;  
    for(let i =0; i<arr.length;i++){
        sum+=arr[i];        
        if(map.has(sum-S)){
            console.log(`${map.get(sum-S) + 1} ${i+1}`);
            break;
        }
        map.set(sum,i+1);
    }
}
