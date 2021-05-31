reverseString = (a) => {
  let arr = a.split("");
  let b="";  
  for(let i=arr.length-1;i>=0;i--){
    b+=a[i]
  }
  return b;
}

console.log(reverseString("abc"));