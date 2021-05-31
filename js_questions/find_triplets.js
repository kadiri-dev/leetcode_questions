function find_triplets(array){
    let map =new Map();
    let count=0;
    for(let i=0;i<array.length;i++){
        map.set(array[i],1);
    }

    for(let i=0;i<array.length;i++){
        for(let j=i+1;j<array.length;j++){
            if(map.has(array[i]+array[j])){
                count+=1;
            }
        }
    }
    console.log(`${count}`);

}
find_triplets([2, 3, 4]);
