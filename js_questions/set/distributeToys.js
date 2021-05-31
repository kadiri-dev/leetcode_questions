function findKid(k,t,i){
    if(t+i>k){
        t=t-(k-i+1);
    }
    else if(t+i==k){
        return k;
    }
    else{
        return t+i;
    }
    while(t>k){
        t=t-k;
    }
    return t;
}

console.log(findKid(3,5,1));