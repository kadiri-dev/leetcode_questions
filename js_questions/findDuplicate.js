
function findRepeat(arr){
    let myMap = new Map();
    for(let i=0;i<arr.length;i++){
        if(myMap.get(arr[i]) !== undefined){
            console.log(arr[i]);
        }
        myMap.set(arr[i],1)
    }
}

findRepeat([4,2,4,5,3,1]);