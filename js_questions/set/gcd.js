function findHCF(a,b){
    for(let i=a>b?b:a;i>0;i--){
        if(a%i == 0 && b%i == 0){
            return i;
        }
    }
}

console.log(findHCF(6,6));